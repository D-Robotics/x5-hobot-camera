/***************************************************************************
* COPYRIGHT NOTICE
* Copyright 2019 Horizon Robotics, Inc.
* All rights reserved.
***************************************************************************/
#ifndef UTILITY_SENSOR_INC_SC202CS_SETTING_H_
#define UTILITY_SENSOR_INC_SC202CS_SETTING_H_

#ifdef __cplusplus
extern "C" {
#endif
#define TRIGGER

static uint32_t sc202cs_linear_init_1600x1200_30fps_setting[] = {
	0x0103,0x01,
	0x0100,0x00,
	0x36e9,0x80,
	0x36ea,0x07,
	0x36eb,0x0c,
	0x36ec,0x01,
	0x36ed,0x18,
	0x36e9,0x24,
	0x301f,0x0c,
	0x320c,0x07,
	0x320d,0x00,
	0x320e,0x04,
	0x320f,0xe2,
	0x3250,0x40,
	0x3301,0xff,
	0x3304,0x68,
	0x3306,0x30,
	0x3308,0x08,
	0x3309,0xa8,
	0x330b,0xb0,
	0x330c,0x18,
	0x330d,0xff,
	0x330e,0x20,
	0x331e,0x59,
	0x331f,0x99,
	0x3333,0x10,
	0x335e,0x06,
	0x335f,0x08,
	0x3364,0x1f,
	0x337c,0x02,
	0x337d,0x0a,
	0x338f,0xa0,
	0x3390,0x01,
	0x3391,0x03,
	0x3392,0x1f,
	0x3393,0xff,
	0x3394,0xff,
	0x3395,0xff,
	0x33a2,0x04,
	0x33ad,0x0c,
	0x33b1,0x20,
	0x33b3,0x38,
	0x33f9,0x30,
	0x33fb,0x38,
	0x33fc,0x0f,
	0x33fd,0x1f,
	0x349f,0x03,
	0x34a6,0x03,
	0x34a7,0x1f,
	0x34a8,0x38,
	0x34a9,0x30,
	0x34ab,0xb0,
	0x34ad,0xb0,
	0x34f8,0x1f,
	0x34f9,0x20,
	0x3630,0xa0,
	0x3631,0x92,
	0x3632,0x64,
	0x3633,0x43,
	0x3637,0x49,
	0x363a,0x85,
	0x363c,0x0f,
	0x3650,0x31,
	0x3670,0x0d,
	0x3674,0xc0,
	0x3675,0xa0,
	0x3676,0xa0,
	0x3677,0x92,
	0x3678,0x96,
	0x3679,0x9a,
	0x367c,0x03,
	0x367d,0x0f,
	0x367e,0x01,
	0x367f,0x0f,
	0x3698,0x83,
	0x3699,0x86,
	0x369a,0x8c,
	0x369b,0x94,
	0x36a2,0x01,
	0x36a3,0x03,
	0x36a4,0x07,
	0x36ae,0x0f,
	0x36af,0x1f,
	0x36bd,0x22,
	0x36be,0x22,
	0x36bf,0x22,
	0x36d0,0x01,
	0x370f,0x02,
	0x3721,0x6c,
	0x3722,0x8d,
	0x3725,0xc5,
	0x3727,0x14,
	0x3728,0x04,
	0x37b7,0x04,
	0x37b8,0x04,
	0x37b9,0x06,
	0x37bd,0x07,
	0x37be,0x0f,
	0x3901,0x02,
	0x3903,0x40,
	0x3905,0x8d,
	0x3907,0x00,
	0x3908,0x41,
	0x391f,0x41,
	0x3933,0x80,
	0x3934,0x02,
	0x3937,0x6f,
	0x393a,0x01,
	0x393d,0x01,
	0x393e,0xc0,
	0x39dd,0x41,
	0x3e00,0x00,
	0x3e01,0x4d,
	0x3e02,0xc0,
	0x3e09,0x00,
	0x4509,0x28,
	0x450d,0x61,
	0x4800,0x44,
	0x4819,0x09,
	0x481b,0x05,
	0x481d,0x13,
	0x481f,0x04,
	0x4821,0x0a,
	0x4823,0x05,
	0x4825,0x04,
	0x4827,0x04,
	0x4829,0x07,
	// 0x0100,0x01,
};

static uint32_t sc202cs_stream_on_setting[] = {
	0x0100,0x01,
};

static uint32_t sc202cs_stream_off_setting[] = {
	0x0100,0x00,
};

static uint32_t sc202cs_gain_lut[] =
{
		0x000080,
		0x000083,
		0x000086,
		0x000089,
		0x00008c,
		0x00008f,
		0x000092,
		0x000095,
		0x000099,
		0x00009c,
		0x00009f,
		0x0000a3,
		0x0000a7,
		0x0000aa,
		0x0000ae,
		0x0000b2,
		0x0000b5,
		0x0000b9,
		0x0000be,
		0x0000c2,
		0x0000c6,
		0x0000ca,
		0x0000cf,
		0x0000d3,
		0x0000d8,
		0x0000dd,
		0x0000e1,
		0x0000e6,
		0x0000eb,
		0x0000f0,
		0x0000f6,
		0x0000fb,
		0x010080,
		0x010083,
		0x010086,
		0x010089,
		0x01008c,
		0x01008f,
		0x010092,
		0x010095,
		0x010099,
		0x01009c,
		0x01009f,
		0x0100a3,
		0x0100a7,
		0x0100aa,
		0x0100ae,
		0x0100b2,
		0x0100b5,
		0x0100b9,
		0x0100be,
		0x0100c2,
		0x0100c6,
		0x0100ca,
		0x0100cf,
		0x0100d3,
		0x0100d8,
		0x0100dc,
		0x0100e1,
		0x0100e6,
		0x0100eb,
		0x0100f0,
		0x0100f6,
		0x0100fb,
		0x030080,
		0x030083,
		0x030086,
		0x030089,
		0x03008c,
		0x03008f,
		0x030092,
		0x030095,
		0x030099,
		0x03009c,
		0x03009f,
		0x0300a3,
		0x0300a6,
		0x0300aa,
		0x0300ae,
		0x0300b2,
		0x0300b6,
		0x0300b9,
		0x0300be,
		0x0300c2,
		0x0300c6,
		0x0300ca,
		0x0300cf,
		0x0300d3,
		0x0300d8,
		0x0300dc,
		0x0300e1,
		0x0300e6,
		0x0300eb,
		0x0300f0,
		0x0300f6,
		0x0300fb,
		0x070080,
		0x070083,
		0x070086,
		0x070089,
		0x07008c,
		0x07008f,
		0x070092,
		0x070095,
		0x070099,
		0x07009c,
		0x07009f,
		0x0700a3,
		0x0700a6,
		0x0700aa,
		0x0700ae,
		0x0700b2,
		0x0700b6,
		0x0700b9,
		0x0700be,
		0x0700c2,
		0x0700c6,
		0x0700ca,
		0x0700cf,
		0x0700d3,
		0x0700d8,
		0x0700dc,
		0x0700e1,
		0x0700e6,
		0x0700eb,
		0x0700f0,
		0x0700f6,
		0x0700fb,
		0x0f0080,
		0x0f0083,
		0x0f0086,
		0x0f0089,
		0x0f008c,
		0x0f008f,
		0x0f0092,
		0x0f0095,
		0x0f0099,
		0x0f009c,
		0x0f009f,
		0x0f00a3,
		0x0f00a6,
		0x0f00aa,
		0x0f00ae,
		0x0f00b2,
		0x0f00b6,
		0x0f00b9,
		0x0f00be,
		0x0f00c2,
		0x0f00c6,
		0x0f00ca,
		0x0f00cf,
		0x0f00d3,
		0x0f00d8,
		0x0f00dc,
		0x0f00e1,
		0x0f00e6,
		0x0f00eb,
		0x0f00f0,
		0x0f00f6,
		0x0f00fb,
		0x0f0180,
		0x0f0183,
		0x0f0186,
		0x0f0189,
		0x0f018c,
		0x0f018f,
		0x0f0192,
		0x0f0195,
		0x0f0199,
		0x0f019c,
		0x0f019f,
		0x0f01a3,
		0x0f01a6,
		0x0f01aa,
		0x0f01ae,
		0x0f01b2,
		0x0f01b6,
		0x0f01b9,
		0x0f01be,
		0x0f01c2,
		0x0f01c6,
		0x0f01ca,
		0x0f01cf,
		0x0f01d3,
		0x0f01d8,
		0x0f01dc,
		0x0f01e1,
		0x0f01e6,
		0x0f01eb,
		0x0f01f0,
		0x0f01f6,
		0x0f01fb,

};
#ifdef __cplusplus
}
#endif

#endif  //UTILITY_SENSOR_INC_SC202CS_SETTING_H_
