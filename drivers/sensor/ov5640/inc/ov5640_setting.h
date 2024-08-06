/***************************************************************************
 * COPYRIGHT NOTICE
 * Copyright 2022 Horizon Robotics.
 * All rights reserved.
 ***************************************************************************/
#ifndef UTILITY_SENSOR_INC_OV5640_SETTING_H_
#define UTILITY_SENSOR_INC_OV5640_SETTING_H_

#ifdef __cplusplus
extern "C"
{
#endif

#define OV5640_CHIP_ID_MSB   0x300a
#define OV5640_CHIP_ID_LSB   0x300b
#define OV5640_TPG_CTRL      0x503d
#define OV5640_TPG_SET       0x4741
#define OV5640_FORMAT_CTRL00 0x4300
#define OV5640_FMT_MUX_CTRL  0x501f
#define OV5640_FRAME_CTRL01  0x4202
#define OV5640_SC_PLL_CTRL0  0x3034
#define OV5640_SC_PLL_CTRL2  0x3036

static uint32_t ov5640_init_settings[] = {
        0x4202, 0x0f,
        /* reset */
        0x3103, 0x11,
        DELAY_FLAG, 5,
        0x3008, 0x82,
        DELAY_FLAG, 5,
        0x3008, 0x42,
        DELAY_FLAG, 5,

        /* initial setting */
        0x3103, 0x03,
        0x3017, 0x00,
        0x3018, 0x00,
        0x3108, 0x01,
        0x3630, 0x36,
        0x3631, 0x0e,
        0x3632, 0xe2,
        0x3633, 0x12,
        0x3621, 0xe0,
        0x3704, 0xa0,
        0x3703, 0x5a,
        0x3715, 0x78,
        0x3717, 0x01,
        0x370b, 0x60,
        0x3705, 0x1a,
        0x3905, 0x02,
        0x3906, 0x10,
        0x3901, 0x0a,
        0x3731, 0x12,
        0x3600, 0x08,
        0x3601, 0x33,
        0x302d, 0x60,
        0x3620, 0x52,
        0x371b, 0x20,
        0x471c, 0x50,
        0x3a13, 0x43,
        0x3a18, 0x00,
        0x3a19, 0xf8,
        0x3635, 0x13,
        0x3636, 0x03,
        0x3634, 0x40,
        0x3622, 0x01,
        /* light meter */
        0x3c01, 0x34,
        0x3c04, 0x28,
        0x3c05, 0x98,
        0x3c06, 0x00,
        0x3c07, 0x08,
        0x3c08, 0x00,
        0x3c09, 0x1c,
        0x3c0a, 0x9c,
        0x3c0b, 0x40,
        /* timing */
        0x3800, 0x00,
        0x3801, 0x00,
        0x3802, 0x00,
        0x3803, 0x00,
        0x3804, 0x0a,
        0x3805, 0x3f,
        0x3806, 0x07,
        0x3807, 0x9f,
        0x3810, 0x00,
        0x3811, 0x10,
        0x3812, 0x00,
        0x3813, 0x04,
        0x3708, 0x64,
        0x3a08, 0x01,
        0x3a09, 0x27,
        0x4001, 0x02,
        0x4005, 0x1a,
        0x3000, 0x00,
        0x3002, 0x1c,
        0x3004, 0xff,
        0x3006, 0xc3,

        0x300e, 0x45,
        0x302e, 0x08,
        0x4300, 0x02,
        0x501f, 0x03,
        0x4407, 0x04,
        0x440e, 0x00,
        //0x4740, 0x21, /* HS、VS、PLCK polarity */
        0x5000, 0xa7,

        /* AWB */
        0x5180, 0xff,
        0x5181, 0xf2,
        0x5182, 0x00,
        0x5183, 0x14,
        0x5184, 0x25,
        0x5185, 0x24,
        0x5186, 0x09,
        0x5187, 0x09,
        0x5188, 0x09,
        0x5189, 0x75,
        0x518a, 0x54,
        0x518b, 0xe0,
        0x518c, 0xb2,
        0x518d, 0x42,
        0x518e, 0x3d,
        0x518f, 0x56,
        0x5190, 0x46,
        0x5191, 0xf8,
        0x5192, 0x04,
        0x5193, 0x70,
        0x5194, 0xf0,
        0x5195, 0xf0,
        0x5196, 0x03,
        0x5197, 0x01,
        0x5198, 0x04,
        0x5199, 0x12,
        0x519a, 0x04,
        0x519b, 0x00,
        0x519c, 0x06,
        0x519d, 0x82,
        0x519e, 0x38,
        /* color matrix */
        0x5381, 0x1e,
        0x5382, 0x5b,
        0x5383, 0x08,
        0x5384, 0x0a,
        0x5385, 0x7e,
        0x5386, 0x88,
        0x5387, 0x7c,
        0x5388, 0x6c,
        0x5389, 0x10,
        0x538a, 0x01,
        0x538b, 0x98,
        /* CIP */
        0x5300, 0x08,
        0x5301, 0x30,
        0x5302, 0x10,
        0x5303, 0x00,
        0x5304, 0x08,
        0x5305, 0x30,
        0x5306, 0x08,
        0x5307, 0x16,
        0x5309, 0x08,
        0x530a, 0x30,
        0x530b, 0x04,
        0x530c, 0x06,
        /* Gamma */
        0x5480, 0x01,
        0x5481, 0x08,
        0x5482, 0x14,
        0x5483, 0x28,
        0x5484, 0x51,
        0x5485, 0x65,
        0x5486, 0x71,
        0x5487, 0x7d,
        0x5488, 0x87,
        0x5489, 0x91,
        0x548a, 0x9a,
        0x548b, 0xaa,
        0x548c, 0xb8,
        0x548d, 0xcd,
        0x548e, 0xdd,
        0x548f, 0xea,
        0x5490, 0x1d,
        /* UV adjust */
        0x5580, 0x06,
        0x5583, 0x40,
        0x5584, 0x10,
        0x5589, 0x10,
        0x558a, 0x00,
        0x558b, 0xf8,
        0x501d, 0x04,
        /* Lens correction */
        0x5800, 0x23,
        0x5801, 0x14,
        0x5802, 0x0f,
        0x5803, 0x0f,
        0x5804, 0x12,
        0x5805, 0x26,
        0x5806, 0x0c,
        0x5807, 0x08,
        0x5808, 0x05,
        0x5809, 0x05,
        0x580a, 0x08,
        0x580b, 0x0d,
        0x580c, 0x08,
        0x580d, 0x03,
        0x580e, 0x00,
        0x580f, 0x00,
        0x5810, 0x03,
        0x5811, 0x09,
        0x5812, 0x07,
        0x5813, 0x03,
        0x5814, 0x00,
        0x5815, 0x01,
        0x5816, 0x03,
        0x5817, 0x08,
        0x5818, 0x0d,
        0x5819, 0x08,
        0x581a, 0x05,
        0x581b, 0x06,
        0x581c, 0x08,
        0x581d, 0x0e,
        0x581e, 0x29,
        0x581f, 0x17,
        0x5820, 0x11,
        0x5821, 0x11,
        0x5822, 0x15,
        0x5823, 0x28,
        0x5824, 0x46,
        0x5825, 0x26,
        0x5826, 0x08,
        0x5827, 0x26,
        0x5828, 0x64,
        0x5829, 0x26,
        0x582a, 0x24,
        0x582b, 0x22,
        0x582c, 0x24,
        0x582d, 0x24,
        0x582e, 0x06,
        0x582f, 0x22,
        0x5830, 0x40,
        0x5831, 0x42,
        0x5832, 0x24,
        0x5833, 0x26,
        0x5834, 0x24,
        0x5835, 0x22,
        0x5836, 0x22,
        0x5837, 0x26,
        0x5838, 0x44,
        0x5839, 0x24,
        0x583a, 0x26,
        0x583b, 0x28,
        0x583c, 0x42,
        0x583d, 0xce,
        /* AEC */
        0x5025, 0x00,
        0x3a0f, 0x30,
        0x3a10, 0x28,
        0x3a1b, 0x30,
        0x3a1e, 0x26,
        0x3a11, 0x60,
        0x3a1f, 0x14,
        /* Frame OFF */
        0x4202, 0x0f,
        0x3008, 0x02
};

static uint32_t ov5640_720p_settings[] = {
        0x3c07, 0x07,
        0x3820, 0x40,
        0x3821, 0x06,
        0x3814, 0x31,
        0x3815, 0x31,
        0x3800, 0x00,
        0x3801, 0x00,
        0x3802, 0x00,
        0x3803, 0xfa,
        0x3804, 0x0a,
        0x3805, 0x3f,
        0x3806, 0x06,
        0x3807, 0xa9,
        0x3808, 0x05,
        0x3809, 0x00,
        0x380a, 0x02,
        0x380b, 0xd0,
        0x380c, 0x06,
        0x380d, 0x72,
        0x380e, 0x02,
        0x380f, 0xee,
        0x3813, 0x04,
        0x3618, 0x04, /*no document default 0x00*/
        0x3612, 0x2b, /*no document default 0x59*/
        0x3709, 0x12, /*no document default 0x52*/
        0x370c, 0x00, /*no document default 3*/
        0x4004, 0x06, /*blc line number*/
        0x3a02, 0x02,
        0x3a03, 0xe0,
        0x3a14, 0x02,
        0x3a15, 0xe0,
        0x3002, 0x1c,
        0x3006, 0xc3,
        0x4713, 0x02, /*jpeg mode */
        0x4407, 0x0c, /*jpg ctl*/
        0x460b, 0x37,
        0x460c, 0x20,
        0x4837, 0x18, /*pclk ns, origin 0x16*/
        0x3824, 0x01,
        0x5001, 0x83,
        0x3503, 0x00
};

/* 1920x1080 30fps
 * NOTICE: vts/hts, clk maybe have problems, you have to ask ov sensor fae.
 * */
static uint32_t ov5640_1080p_settings[] = {
        0x3c07, 0x07,
        0x3820, 0x40,
        0x3821, 0x06,
        0x3814, 0x11,
        0x3815, 0x11,
        0x3800, 0x01,
        0x3801, 0x50,
        0x3802, 0x01,
        0x3803, 0xb2,
        0x3804, 0x08,
        0x3805, 0xef,
        0x3806, 0x05,
        0x3807, 0xf1,
        0x3808, 0x07,
        0x3809, 0x80,
        0x380a, 0x04,
        0x380b, 0x38,
        0x380c, 0x0A,
        0x380d, 0x1c,
        0x380e, 0x06,
        0x380f, 0x00,
        0x3813, 0x04,
        0x3618, 0x04, /*no document default 0x00*/
        0x3612, 0x2b, /*no document default 0x59*/
        0x3709, 0x12, /*no document default 0x52*/
        0x370c, 0x00, /*no document default 3*/
        0x4004, 0x06, /*blc line number*/
        0x3002, 0x1c,
        0x3006, 0xc3,
        0x4713, 0x02, /*jpeg mode */
        0x4407, 0x0c, /*jpg ctl*/
        0x460b, 0x37,
        0x460c, 0x20,
        0x4837, 0x18, /*pclk ns, origin 0x16*/
        0x3824, 0x01,
        0x5001, 0x83,
        0x3503, 0x00
};

static uint32_t ov5640_clk_settings[] = {
        0x3035, 0x11,
        0x3036, 0x32,
        0x3037, 0x11
};

static uint32_t ov5640_2lane_stream_on_setting[] = {
        0x4202, 0x00
};

static uint32_t ov5640_2lane_stream_off_setting[] = {
        0x4202, 0x0f
};

static uint32_t ov5640_gain_lut[] = {
        0x020,
        0x020,
        0x021,
        0x022,
        0x022,
        0x023,
        0x024,
        0x025,
        0x026,
        0x026,
        0x027,
        0x028,
        0x029,
        0x02A,
        0x02B,
        0x02C,
        0x02D,
        0x02E,
        0x02F,
        0x030,
        0x031,
        0x032,
        0x033,
        0x034,
        0x035,
        0x036,
        0x038,
        0x039,
        0x03A,
        0x03B,
        0x03D,
        0x03E,
        0x040,
        0x041,
        0x042,
        0x044,
        0x045,
        0x047,
        0x048,
        0x04A,
        0x04C,
        0x04D,
        0x04F,
        0x051,
        0x052,
        0x054,
        0x056,
        0x058,
        0x05A,
        0x05C,
        0x05E,
        0x060,
        0x062,
        0x064,
        0x067,
        0x069,
        0x06B,
        0x06D,
        0x070,
        0x072,
        0x075,
        0x077,
        0x07A,
        0x07D,
        0x080,
        0x082,
        0x085,
        0x088,
        0x08B,
        0x08E,
        0x091,
        0x094,
        0x098,
        0x09B,
        0x09E,
        0x0A2,
        0x0A5,
        0x0A9,
        0x0AD,
        0x0B1,
        0x0B5,
        0x0B8,
        0x0BD,
        0x0C1,
        0x0C5,
        0x0C9,
        0x0CE,
        0x0D2,
        0x0D7,
        0x0DB,
        0x0E0,
        0x0E5,
        0x0EA,
        0x0EF,
        0x0F5,
        0x0FA,
        0x0100,
        0x0105,
        0x010B,
        0x0111,
        0x0117,
        0x011D,
        0x0123,
        0x0129,
        0x0130,
        0x0137,
        0x013D,
        0x0144,
        0x014B,
        0x0153,
        0x015A,
        0x0162,
        0x016A,
        0x0171,
        0x017A,
        0x0182,
        0x018A,
        0x0193,
        0x019C,
        0x01A5,
        0x01AE,
        0x01B7,
        0x01C1,
        0x01CB,
        0x01D5,
        0x01DF,
        0x01EA,
        0x01F5,
        0x0200,
        0x020B,
        0x0216,
        0x0222,
        0x022E,
        0x023A,
        0x0247,
        0x0253,
        0x0260,
        0x026E,
        0x027B,
        0x0289,
        0x0297,
        0x02A6,
        0x02B5,
        0x02C4,
        0x02D4,
        0x02E3,
        0x02F4,
        0x0304,
        0x0315,
        0x0326,
        0x0338,
        0x034A,
        0x035D,
        0x036F,
        0x0383,
        0x0396,
        0x03AB,
        0x03BF,
        0x03D4,
        0x03EA,
        0x0400,
        0x0416,
        0x042D,
        0x0444,
        0x045C,
        0x0475,
        0x048E,
        0x04A7,
        0x04C1,
        0x04DC,
        0x04F7,
        0x0513,
        0x052F,
        0x054D,
        0x056A,
        0x0589,
        0x05A8,
        0x05C7,
        0x05E8,
        0x0609,
        0x062B,
        0x064D,
        0x0671,
        0x0695,
        0x06BA,
        0x06DF,
        0x0706,
        0x072D,
        0x0756,
        0x077F,
        0x07A9,
        0x07D4,
        0x0800
};

#ifdef __cplusplus
}
#endif

#endif
