/***************************************************************************
 * COPYRIGHT NOTICE
 * Copyright 2023 Horizon Robotics.
 * All rights reserved.
 ***************************************************************************/
#define pr_fmt(fmt)		"[imx477]:" fmt

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>
#include <getopt.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <linux/i2c-dev.h>
#include "hb_i2c.h"
#include "hb_cam_utility.h"
#include "inc/imx477_setting.h"
#include "inc/sensor_effect_common.h"
#include "hb_camera_data_config.h"
#define IMX477_EXP_REG_ADDR_HI 0x0202
#define IMX477_FRM_LENGTH_HI 0x0340
#define IMX477_FRM_LENGTH_LO 0x0341
#define IMX477_AGAIN_REG_ADDR_HI 0x0204
#define IMX477_AGAIN_REG_ADDR_LO 0x0205
#define IMX477_DGAIN_REG_ADDR 0x020e
#define MCLK (24000000)

static int imx477_linear_data_init_1920x1080(sensor_info_t *sensor_info);
static int imx477_linear_data_init_3000x4000(sensor_info_t *sensor_info);

#define REG_WIDTH	2	//reg16 data8

static int sensor_poweroff(sensor_info_t *sensor_info)
{
	int gpio, ret = RET_OK;
	if(sensor_info->gpio_num > 0) {
		for(gpio = 0; gpio < sensor_info->gpio_num; gpio++) {
			if(sensor_info->gpio_pin[gpio] != -1) {
				ret = vin_power_ctrl(sensor_info->gpio_pin[gpio],
					sensor_info->gpio_level[gpio]);
				if(ret < 0) {
					vin_err("vin_power_ctrl fail\n");
					return -HB_CAM_SENSOR_POWEROFF_FAIL;
				}
			}
		}
	}

	return ret;
}

static int sensor_poweron(sensor_info_t *sensor_info)
{
	int gpio, ret = RET_OK;
	vin_dbg("%s gpio_num = %d \n", sensor_info->sensor_name, sensor_info->gpio_num);
	if(sensor_info->gpio_num > 0) {
		for(gpio = 0; gpio < sensor_info->gpio_num; gpio++) {
			vin_dbg("%s gpio_pin[%d] = %d \n", sensor_info->sensor_name, gpio, sensor_info->gpio_pin[gpio]);
			if(sensor_info->gpio_pin[gpio] != -1) {
				ret = vin_power_ctrl(sensor_info->gpio_pin[gpio],
					sensor_info->gpio_level[gpio]);
				usleep(100 * 1000);  //100ms
				ret |= vin_power_ctrl(sensor_info->gpio_pin[gpio],
					1 - sensor_info->gpio_level[gpio]);
				if(ret < 0) {
					vin_err("vin_power_ctrl fail\n");
					return -HB_CAM_SENSOR_POWERON_FAIL;
				}
				usleep(100 * 1000);  //100ms
			}
		}
	}

	return ret;
}

int sensor_init(sensor_info_t *sensor_info)
{
	int ret = RET_OK;
	int setting_size = 0;

	ret = sensor_poweron(sensor_info);
	if (ret < 0) {
		vin_err("%d : sensor reset %s fail\n",
			   __LINE__, sensor_info->sensor_name);
		return ret;
	}

	/** common setting start**/
	setting_size = sizeof(imx477_common_regs) / sizeof(uint32_t) / 2;
	ret = vin_write_array(sensor_info->bus_num, sensor_info->sensor_addr, REG_WIDTH,
		setting_size, imx477_common_regs);
	if (ret < 0) {
		vin_err("%d : common setting %s fail\n", __LINE__, sensor_info->sensor_name);
		return ret;
	}

	/** quality setting start**/
	setting_size = sizeof(imx477_image_quality) / sizeof(uint32_t) / 2;
	ret = vin_write_array(sensor_info->bus_num, sensor_info->sensor_addr, REG_WIDTH,
		setting_size, imx477_image_quality);
	if (ret < 0) {
		vin_err("%d : quality setting %s fail\n", __LINE__, sensor_info->sensor_name);
		return ret;
	}

	if (sensor_info->width == 1920 && sensor_info->height == 1080) {
		switch(sensor_info->sensor_mode) {
		case NORMAL_M:	  // 1: normal
			vin_info("imx477 in normal mode\n");
			setting_size = sizeof(imx477_1080p_50fps_setting) / sizeof(uint32_t) / 2;
			ret = vin_write_array(sensor_info->bus_num, sensor_info->sensor_addr, REG_WIDTH,
				setting_size, imx477_1080p_50fps_setting);
			ret = imx477_linear_data_init_1920x1080(sensor_info);
			if (ret < 0) {
				vin_err("%d : linear data init %s fail\n", __LINE__, sensor_info->sensor_name);
				return ret;
			}
			break;
		default:
			vin_err("not support mode %d\n", sensor_info->sensor_mode);
			ret = -RET_ERROR;
			break;
		}
	}else if (sensor_info->width == 4000 && sensor_info->height == 3000) {
		switch(sensor_info->sensor_mode) {
		case NORMAL_M:	  // 1: normal
			vin_info("imx477 in normal mode\n");
			setting_size = sizeof(imx477_3000p_10fps_setting) / sizeof(uint32_t) / 2;
			ret = vin_write_array(sensor_info->bus_num, sensor_info->sensor_addr, REG_WIDTH,
				setting_size, imx477_3000p_10fps_setting);
			ret = imx477_linear_data_init_3000x4000(sensor_info);
			if (ret < 0) {
				vin_err("%d : linear data init %s fail\n", __LINE__, sensor_info->sensor_name);
				return ret;
			}
			break;
		default:
			vin_err("not support mode %d\n", sensor_info->sensor_mode);
			ret = -RET_ERROR;
			break;
		}
	} 
	vin_info("imx477 config success under %d mode\n\n", sensor_info->sensor_mode);

	return ret;
}

static int sensor_start(sensor_info_t *sensor_info)
{
	int ret = RET_OK;
	int setting_size = 0;

	setting_size = sizeof(imx477_stream_on_setting)/sizeof(uint32_t)/2;
	vin_info("%s start normal/linear mode\n", sensor_info->sensor_name);
	ret = vin_write_array(sensor_info->bus_num, sensor_info->sensor_addr, REG_WIDTH,
			setting_size, imx477_stream_on_setting);
	if(ret < 0) {
		vin_err("start %s fail\n", sensor_info->sensor_name);
		return -HB_CAM_I2C_WRITE_FAIL;
	}
	return ret;
}

static int sensor_stop(sensor_info_t *sensor_info)
{
	int ret = RET_OK;
	int setting_size = 0;

	// linear and hdr mode use one stream_off setting
	setting_size =
		sizeof(imx477_stream_off_setting) / sizeof(uint32_t) / 2;
	vin_info("%s sensor stop\n", sensor_info->sensor_name);
	ret = vin_write_array(sensor_info->bus_num,
			sensor_info->sensor_addr, REG_WIDTH,
			setting_size, imx477_stream_off_setting);
	if (ret < 0) {
		vin_err("start %s fail\n", sensor_info->sensor_name);
		return -HB_CAM_I2C_WRITE_FAIL;
	}

	return ret;
}

static int sensor_deinit(sensor_info_t *sensor_info)
{
	int ret = RET_OK;

	ret = sensor_poweroff(sensor_info);
	if (ret < 0) {
		vin_err("%d : deinit %s fail\n", __LINE__, sensor_info->sensor_name);
		return ret; //-HB_CAM_SENSOR_POWEROFF_FAIL
	}
	return ret;
}

static int imx477_linear_data_init_1920x1080(sensor_info_t *sensor_info)
{
	int ret = RET_OK;
	uint32_t  open_cnt = 0;
	sensor_turning_data_t turning_data;
	uint32_t *stream_on = turning_data.stream_ctrl.stream_on;
	uint32_t *stream_off = turning_data.stream_ctrl.stream_off;

	memset(&turning_data, 0, sizeof(sensor_turning_data_t));

	// common data
	turning_data.bus_num = sensor_info->bus_num;
	turning_data.bus_type = sensor_info->bus_type;
	turning_data.port = sensor_info->port;
	turning_data.reg_width = sensor_info->reg_width;
	turning_data.mode = sensor_info->sensor_mode;
	turning_data.sensor_addr = sensor_info->sensor_addr;
	strncpy(turning_data.sensor_name, sensor_info->sensor_name,
		sizeof(turning_data.sensor_name));

	turning_data.sensor_data.active_width = 1920;
	turning_data.sensor_data.active_height = 1080;

	turning_data.sensor_data.lines_per_second = 65650;
	turning_data.sensor_data.exposure_time_max = 1313;
	turning_data.sensor_data.exposure_time_min = 1;
	turning_data.sensor_data.analog_gain_max = 255;
	turning_data.sensor_data.digital_gain_max = 0;

	//sensor bit && bayer
	sensor_data_bayer_fill(&turning_data.sensor_data, 12, (uint32_t)BAYER_START_R, (uint32_t)BAYER_PATTERN_RGGB);
	// sensor exposure_max_bit, maybe not used ?  //FIXME
	sensor_data_bits_fill(&turning_data.sensor_data, 12);

	//some stress test case, we need kernel stream_ctrl.
	turning_data.stream_ctrl.data_length = 1;

	if(sizeof(turning_data.stream_ctrl.stream_on) >= sizeof(imx477_stream_on_setting)) {
		memcpy(stream_on, imx477_stream_on_setting, sizeof(imx477_stream_on_setting));
	} else {
		vin_err("Number of registers on stream over 10\n");
		return -RET_ERROR;
	}
	if(sizeof(turning_data.stream_ctrl.stream_off) >= sizeof(imx477_stream_off_setting)) {
		memcpy(stream_off, imx477_stream_off_setting, sizeof(imx477_stream_off_setting));
	} else {
		vin_err("Number of registers on stream over 10\n");
		return -RET_ERROR;
	}

	// sync gain lut to kernel driver.
	turning_data.normal.again_lut = malloc(256 * sizeof(uint32_t));
	if (turning_data.normal.again_lut != NULL) {
		memset(turning_data.normal.again_lut, 0xff, 256 * sizeof(uint32_t));
		memcpy(turning_data.normal.again_lut, imx477_gain_lut,
			sizeof(imx477_gain_lut));
	}

	ret = ioctl(sensor_info->sen_devfd, SENSOR_TURNING_PARAM, &turning_data);

	if (turning_data.normal.again_lut) {
		free(turning_data.normal.again_lut);
		turning_data.normal.again_lut = NULL;
	}

	if (ret < 0) {
		vin_err("%s sync gain lut ioctl fail %d\n", sensor_info->sensor_name, ret);
		return -RET_ERROR;
	}

	return ret;
}

static int imx477_linear_data_init_3000x4000(sensor_info_t *sensor_info)
{
	int ret = RET_OK;
	uint32_t  open_cnt = 0;
	sensor_turning_data_t turning_data;
	uint32_t *stream_on = turning_data.stream_ctrl.stream_on;
	uint32_t *stream_off = turning_data.stream_ctrl.stream_off;

	memset(&turning_data, 0, sizeof(sensor_turning_data_t));

	// common data
	turning_data.bus_num = sensor_info->bus_num;
	turning_data.bus_type = sensor_info->bus_type;
	turning_data.port = sensor_info->port;
	turning_data.reg_width = sensor_info->reg_width;
	turning_data.mode = sensor_info->sensor_mode;
	turning_data.sensor_addr = sensor_info->sensor_addr;
	strncpy(turning_data.sensor_name, sensor_info->sensor_name,
		sizeof(turning_data.sensor_name));

	turning_data.sensor_data.active_width = 3000;
	turning_data.sensor_data.active_height = 4000;

	turning_data.sensor_data.lines_per_second = 25840;
	turning_data.sensor_data.exposure_time_max = 852;
	turning_data.sensor_data.exposure_time_min = 1;
	turning_data.sensor_data.analog_gain_max = 143;
	turning_data.sensor_data.digital_gain_max = 0;

	//sensor bit && bayer
	sensor_data_bayer_fill(&turning_data.sensor_data, 12, (uint32_t)BAYER_START_B, (uint32_t)BAYER_PATTERN_RGGB);
	// sensor exposure_max_bit, maybe not used ?  //FIXME
	sensor_data_bits_fill(&turning_data.sensor_data, 12);

	//some stress test case, we need kernel stream_ctrl.
	turning_data.stream_ctrl.data_length = 1;

	if(sizeof(turning_data.stream_ctrl.stream_on) >= sizeof(imx477_stream_on_setting)) {
		memcpy(stream_on, imx477_stream_on_setting, sizeof(imx477_stream_on_setting));
	} else {
		vin_err("Number of registers on stream over 10\n");
		return -RET_ERROR;
	}
	if(sizeof(turning_data.stream_ctrl.stream_off) >= sizeof(imx477_stream_off_setting)) {
		memcpy(stream_off, imx477_stream_off_setting, sizeof(imx477_stream_off_setting));
	} else {
		vin_err("Number of registers on stream over 10\n");
		return -RET_ERROR;
	}

	// sync gain lut to kernel driver.
	turning_data.normal.again_lut = malloc(256 * sizeof(uint32_t));
	if (turning_data.normal.again_lut != NULL) {
		memset(turning_data.normal.again_lut, 0xff, 256 * sizeof(uint32_t));
		memcpy(turning_data.normal.again_lut, imx477_gain_lut,
			sizeof(imx477_gain_lut));
	}

	ret = ioctl(sensor_info->sen_devfd, SENSOR_TURNING_PARAM, &turning_data);

	if (turning_data.normal.again_lut) {
		free(turning_data.normal.again_lut);
		turning_data.normal.again_lut = NULL;
	}

	if (ret < 0) {
		vin_err("%s sync gain lut ioctl fail %d\n", sensor_info->sensor_name, ret);
		return -RET_ERROR;
	}

	return ret;
}

static int sensor_aexp_gain_control(hal_control_info_t *info, uint32_t mode, uint32_t *again, uint32_t *dgain, uint32_t gain_num)
{
#ifdef AE_DBG
        printf("test %s, mode = %d gain_num = %d again[0] = %d, dgain[0] = %d\n", __FUNCTION__, mode, gain_num, again[0], dgain[0]);
#endif
    const uint16_t AGAIN_H = 0x0204;
	const uint16_t AGAIN_L = 0x0205;
	char again_reg_value_h = 0;
	char again_reg_value_l = 0;
	int gain_index = 0;

        if (mode == NORMAL_M) {
	        if (again[0] >= sizeof(imx477_gain_lut)/sizeof(uint32_t))
			gain_index = sizeof(imx477_gain_lut)/sizeof(uint32_t) - 1;
		else
			gain_index = again[0];

		again_reg_value_h = (imx477_gain_lut[gain_index] >> 8) & 0x03;
		again_reg_value_l = (imx477_gain_lut[gain_index] >> 0) & 0xFF;
#ifdef AE_DBG
                printf("%s, gain_index: %d, again:0x0204 = 0x%x,again:0x0205 = 0x%x\n",
				__FUNCTION__, gain_index, again_reg_value_h,again_reg_value_l);
#endif
		vin_i2c_write8(info->bus_num, 16, info->sensor_addr, AGAIN_H, again_reg_value_h);
		vin_i2c_write8(info->bus_num, 16, info->sensor_addr, AGAIN_L, again_reg_value_l);

	} else	{
		vin_err(" unsupport mode %d\n", mode);
	}

    return 0;
}

/* input value:
 * line: exposure time value
 * line_num: linear mode: 1; dol2 mode: 2
 * */
static int sensor_aexp_line_control(hal_control_info_t *info, uint32_t mode, uint32_t *line, uint32_t line_num)
{
#ifdef AE_DBG
        printf("line mode %d, --line %d , line_num:%d \n", mode, line[0], line_num);
#endif
    const uint16_t EXP_LINE0 = 0x0202;
	const uint16_t EXP_LINE1 = 0x0203;
	char temp0 = 0, temp1 = 0;

        if (mode == NORMAL_M) {
		uint32_t sline =  line[0];
		if ( sline > 1313) {//1166
			sline = 1313;
		}

		temp0 = (sline >> 8) & 0xFF;
		vin_i2c_write8(info->bus_num, 16, info->sensor_addr, EXP_LINE0, temp0);
		temp1 = (sline) & 0xFF;
        vin_i2c_write8(info->bus_num, 16, info->sensor_addr, EXP_LINE1, temp1);
#ifdef AE_DBG
        printf("write sline = %d, 0x0202 = 0x%x, 0x0203 = 0x%x\n",
                        sline, temp0, temp1);
#endif
        } else {
		vin_err(" unsupport mode %d\n", mode);
	}

	return 0;
}


static int sensor_userspace_control(uint32_t port, uint32_t *enable)
{
	vin_info("enable userspace gain control and line control\n");
	// *enable = 0;	//imx477 use kernel space gain contrl and line control
	*enable = HAL_GAIN_CONTROL | HAL_LINE_CONTROL;
	return 0;
}

#ifdef CAMERA_FRAMEWORK_HBN
SENSOR_MODULE_F(imx477, CAM_MODULE_FLAG_A16D8);
sensor_module_t imx477 = {
	.module = SENSOR_MNAME(imx477),
#else
sensor_module_t imx477 = {
	.module = "imx477",
#endif
	.init = sensor_init,
	.start = sensor_start,
	.stop = sensor_stop,
	.deinit = sensor_deinit,
	.aexp_gain_control = sensor_aexp_gain_control,
	.aexp_line_control = sensor_aexp_line_control,
	.power_on = sensor_poweron,
	.power_off = sensor_poweroff,
	.userspace_control = sensor_userspace_control,
};
