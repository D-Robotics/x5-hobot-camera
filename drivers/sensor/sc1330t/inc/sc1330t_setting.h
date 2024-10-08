/***************************************************************************
* COPYRIGHT NOTICE
* Copyright 2019 Horizon Robotics, Inc.
* All rights reserved.
***************************************************************************/
#ifndef UTILITY_SENSOR_INC_SC1330T_SETTING_H_
#define UTILITY_SENSOR_INC_SC1330T_SETTING_H_

#ifdef __cplusplus
extern "C" {
#endif

enum MODE_TYPE {
	SC1330T,
	SC1330T_HDR,
	MODE_TYPE_MAX,
	MODE_TYPE_NUM,
};

static uint32_t sc1330t_linear_init_30fps_setting[] = {
	0x0103,0x01,
	0x0100,0x00,
	0x36e9,0x80,
	0x36f9,0x80,
	0x3018,0x12,
	0x301f,0x0b,
	0x3031,0x0a,
	0x3037,0x20,
	0x320c,0x06,
	0x320d,0x40,
	0x320e,0x04,
	0x320f,0x1a,
	0x3251,0x98,
	0x3253,0x08,
	0x325f,0x0a,
	0x3304,0x50,
	0x3306,0x88,
	0x330b,0x00,
	0x330d,0x30,
	0x3310,0x0e,
	0x3314,0x92,
	0x331e,0x41,
	0x360f,0x21,
	0x3621,0xe8,
	0x3633,0x43,
	0x3634,0x33,
	0x3635,0x20,
	0x3637,0x19,
	0x3638,0x0a,
	0x363b,0x04,
	0x363c,0x06,
	0x3670,0x42,
	0x3671,0x15,
	0x3672,0x05,
	0x3673,0x15,
	0x3674,0x40,
	0x3675,0x80,
	0x3676,0x48,
	0x367a,0x40,
	0x367b,0x48,
	0x367c,0x40,
	0x367d,0x58,
	0x3699,0x00,
	0x369a,0x00,
	0x369b,0x1f,
	0x36a2,0x08,
	0x36a3,0x58,
	0x36a6,0x40,
	0x36a7,0x58,
	0x36ab,0x40,
	0x36ac,0x80,
	0x36ad,0x48,
	0x36d0,0x40,
	0x36db,0x04,
	0x36dc,0x04,
	0x36dd,0x14,
	0x36de,0x40,
	0x36df,0x48,
	0x36ea,0x2b,
	0x36eb,0x0c,
	0x36ec,0x0c,
	0x36ed,0x04,
	0x36fa,0x2b,
	0x36fb,0x00,
	0x36fc,0x10,
	0x36fd,0x34,
	0x3e01,0x41,
	0x3e02,0x20,
	0x450a,0x71,
	0x578a,0x18,
	0x578b,0x10,
	0x5793,0x18,
	0x5794,0x10,
	0x36e9,0x24,
	0x36f9,0x38,
	// 0x0100,0x01,
};

static uint32_t sc1330t_linear_init_60fps_setting[] = {
	0x0103,0x01,
	0x0100,0x00,
	0x36e9,0x80,
	0x36f9,0x80,
	0x3018,0x12,
	0x3019,0x0e,
	0x301f,0x78,
	0x3031,0x0a,
	0x3037,0x20,
	0x3211,0x06,
	0x3251,0x98,
	0x3253,0x08,
	0x325f,0x0a,
	0x3304,0x40,
	0x3306,0x70,
	0x3309,0x70,
	0x330a,0x01,
	0x330b,0xf0,
	0x330d,0x30,
	0x3310,0x0e,
	0x3314,0x92,
	0x331e,0x31,
	0x331f,0x61,
	0x335d,0x60,
	0x3364,0x5e,
	0x3396,0x08,
	0x3397,0x18,
	0x3398,0x38,
	0x3399,0x0c,
	0x339a,0x10,
	0x339b,0x1e,
	0x339c,0x70,
	0x33af,0x38,
	0x360f,0x21,
	0x3621,0xe8,
	0x3632,0x68,
	0x3633,0x33,
	0x3634,0x23,
	0x3635,0x20,
	0x3637,0x19,
	0x3638,0x08,
	0x363b,0x04,
	0x363c,0x06,
	0x3670,0x42,
	0x3671,0x05,
	0x3672,0x15,
	0x3673,0x15,
	0x3674,0xc0,
	0x3675,0x84,
	0x3676,0x88,
	0x367a,0x48,
	0x367b,0x58,
	0x367c,0x48,
	0x367d,0x58,
	0x3699,0x00,
	0x369a,0x00,
	0x369b,0x1f,
	0x36a2,0x48,
	0x36a3,0x58,
	0x36a6,0x48,
	0x36a7,0x58,
	0x36ab,0xc0,
	0x36ac,0x84,
	0x36ad,0x88,
	0x36d0,0x40,
	0x36db,0x04,
	0x36dc,0x14,
	0x36dd,0x14,
	0x36de,0x48,
	0x36df,0x58,
	0x36ea,0x3a,
	0x36eb,0x0c,
	0x36ec,0x05,
	0x36ed,0x34,
	0x36fa,0x37,
	0x36fb,0x15,
	0x36fc,0x00,
	0x36fd,0x34,
	0x3e01,0x3e,
	0x450a,0x71,
	0x4819,0x0b,
	0x481b,0x06,
	0x481d,0x17,
	0x481f,0x05,
	0x4821,0x0b,
	0x4823,0x06,
	0x4825,0x05,
	0x4827,0x05,
	0x4829,0x09,
	0x578a,0x18,
	0x578b,0x10,
	0x5793,0x18,
	0x5794,0x10,
	0x5799,0x00,
	0x36e9,0x24,
	0x36f9,0x30,
	// 0x0100,0x01,
};

static uint32_t sc1330t_hdr_init_setting[] = {
	0x0103,0x01,
	0x0100,0x00,
	0x36e9,0x80,
	0x36f9,0x80,
	0x3018,0x12,
	0x3019,0x0e,
	0x301f,0x47,
	0x3031,0x0a,
	0x3037,0x20,
	0x3200,0x00,
	0x3201,0x04,
	0x3202,0x00,
	0x3203,0x04,
	0x3204,0x05,
	0x3205,0x0b,
	0x3206,0x03,
	0x3207,0xcb,
	0x3208,0x05,
	0x3209,0x00,
	0x320a,0x03,
	0x320b,0xc0,
	0x320c,0x06,
	0x320d,0x72,
	0x320e,0x0f,
	0x320f,0xa0,
	0x3210,0x00,
	0x3211,0x04,
	0x3212,0x00,
	0x3213,0x04,
	0x3250,0x3f,
	0x3251,0x98,
	0x3253,0x08,
	0x325f,0x0a,
	0x3281,0x01,
	0x3304,0x40,
	0x3306,0x70,
	0x3309,0x70,
	0x330a,0x01,
	0x330b,0xf0,
	0x330d,0x30,
	0x3310,0x0e,
	0x3314,0x92,
	0x331e,0x31,
	0x331f,0x61,
	0x335d,0x60,
	0x3364,0x5e,
	0x3396,0x08,
	0x3397,0x18,
	0x3398,0x38,
	0x3399,0x0c,
	0x339a,0x10,
	0x339b,0x1e,
	0x339c,0x70,
	0x33af,0x38,
	0x360f,0x21,
	0x3621,0xe8,
	0x3632,0x68,
	0x3633,0x33,
	0x3634,0x23,
	0x3635,0x20,
	0x3637,0x19,
	0x3638,0x08,
	0x363b,0x04,
	0x363c,0x06,
	0x3670,0x42,
	0x3671,0x05,
	0x3672,0x15,
	0x3673,0x15,
	0x3674,0xc0,
	0x3675,0x84,
	0x3676,0x88,
	0x367a,0x48,
	0x367b,0x58,
	0x367c,0x48,
	0x367d,0x58,
	0x3699,0x00,
	0x369a,0x00,
	0x369b,0x1f,
	0x36a2,0x48,
	0x36a3,0x58,
	0x36a6,0x48,
	0x36a7,0x58,
	0x36ab,0xc0,
	0x36ac,0x84,
	0x36ad,0x88,
	0x36d0,0x40,
	0x36db,0x04,
	0x36dc,0x14,
	0x36dd,0x14,
	0x36de,0x48,
	0x36df,0x58,
	0x36ea,0x35,
	0x36eb,0x0c,
	0x36ec,0x05,
	0x36ed,0x24,
	0x36fa,0x35,
	0x36fb,0x15,
	0x36fc,0x10,
	0x36fd,0x34,
	0x3e01,0x74,
	0x3e02,0x00,
	0x3e04,0x07,
	0x3e05,0x40,
	0x3e23,0x02,
	0x3e24,0x20,
	0x450a,0x71,
	0x4816,0x71,
	0x4819,0x0c,
	0x481b,0x07,
	0x481d,0x1a,
	0x481f,0x05,
	0x4821,0x0c,
	0x4823,0x06,
	0x4825,0x05,
	0x4827,0x06,
	0x4829,0x0a,
	0x578a,0x18,
	0x578b,0x10,
	0x5793,0x18,
	0x5794,0x10,
	0x5799,0x00,
	0x36e9,0x53,
	0x36f9,0x53,
	// 0x0100,0x01,
};

static uint32_t sc1330t_stream_on_setting[] = {
	0x0100,0x01,
};

static uint32_t sc1330t_stream_off_setting[] = {
	0x0100,0x00,
};

static uint32_t sc1330t_gain_lut[] = {
	0x4003,	//1.0
	0x4103,
	0x4303,
	0x4403,
	0x4603,
	0x4703,
	0x4903,
	0x4A03,
	0x4C03,
	0x4E03,
	0x4F03,
	0x5103,
	0x5303,
	0x5503,
	0x5703,
	0x5903,
	0x5B03,
	0x5C03,
	0x5F03,
	0x6103,
	0x6303,
	0x6503,
	0x6703,
	0x6903,
	0x6C03,
	0x6E03,
	0x7003,
	0x7303,
	0x7503,
	0x7803,
	0x7B03,
	0x7D03,
	0x4007,
	0x4107,
	0x4307,
	0x4407,
	0x4607,
	0x4707,
	0x4907,
	0x4A07,
	0x4C07,
	0x4E07,
	0x4F07,
	0x5107,
	0x5307,
	0x5507,
	0x5707,
	0x5907,
	0x5B07,
	0x5C07,
	0x5F07,
	0x6107,
	0x6307,
	0x6507,
	0x6707,
	0x6907,
	0x6C07,
	0x6E07,
	0x7007,
	0x7307,
	0x7507,
	0x7807,
	0x7B07,
	0x7D07,
	0x400F,
	0x410F,
	0x430F,
	0x440F,
	0x460F,
	0x470F,
	0x490F,
	0x4A0F,
	0x4C0F,
	0x4E0F,
	0x4F0F,
	0x510F,
	0x530F,
	0x550F,
	0x4023,
	0x4123,
	0x4323,
	0x4423,
	0x4623,
	0x4723,
	0x4923,
	0x4A23,
	0x4C23,
	0x4D23,
	0x4F23,
	0x5123,
	0x5323,
	0x5423,
	0x5623,
	0x5823,
	0x5A23,
	0x5C23,
	0x5E23,
	0x6023,
	0x6223,
	0x6423,
	0x6723,
	0x6923,
	0x6B23,
	0x6E23,
	0x7023,
	0x7223,
	0x7523,
	0x7723,
	0x7A23,
	0x7D23,
	0x7F23,
	0x4127,
	0x4327,
	0x4427,
	0x4627,
	0x4727,
	0x4927,
	0x4A27,
	0x4C27,
	0x4D27,
	0x4F27,
	0x5127,
	0x5327,
	0x5427,
	0x5627,
	0x5827,
	0x5A27,
	0x5C27,
	0x5E27,
	0x6027,
	0x6227,
	0x6427,
	0x6727,
	0x6927,
	0x6B27,
	0x6E27,
	0x7027,
	0x7227,
	0x7527,
	0x7727,
	0x7A27,
	0x7D27,
	0x7F27,
	0x412F,
	0x432F,
	0x442F,
	0x462F,
	0x472F,
	0x492F,
	0x4A2F,
	0x4C2F,
	0x4D2F,
	0x4F2F,
	0x512F,
	0x532F,
	0x542F,
	0x562F,
	0x582F,
	0x5A2F,
	0x5C2F,
	0x5E2F,
	0x602F,
	0x622F,
	0x642F,
	0x672F,
	0x692F,
	0x6B2F,
	0x6E2F,
	0x702F,
	0x722F,
	0x752F,
	0x772F,
	0x7A2F,
	0x7D2F,
	0x7F2F,
	0x413F,
	0x433F,
	0x443F,
	0x463F,
	0x473F,
	0x493F,
	0x4A3F,
	0x4C3F,
	0x4D3F,
	0x4F3F,
	0x513F,
	0x533F,
	0x543F,
	0x563F,
	0x583F,
	0x5A3F,
	0x5C3F,
	0x5E3F,
	0x603F,
	0x623F,
	0x643F,
	0x673F,
	0x693F,
	0x6B3F,
	0x6E3F,
	0x703F,
	0x723F,
	0x753F,
	0x773F,
	0x7A3F,
	0x7D3F,
	0x7F3F,
};

static uint32_t sc1330t_dgain_lut[] = {
	0x8000,
	0x8300,
	0x8600,
	0x8900,
	0x8C00,
	0x8F00,
	0x9200,
	0x9500,
	0x9800,
	0x9C00,
	0x9F00,
	0xA200,
	0xA600,
	0xAA00,
	0xAD00,
	0xB100,
	0xB500,
	0xB900,
	0xBD00,
	0xC100,
	0xC500,
	0xCA00,
	0xCE00,
	0xD300,
	0xD700,
	0xDC00,
	0xE100,
	0xE600,
	0xEB00,
	0xF000,
	0xF500,
	0xFB00, // 2.0
	0x8001,
	0x8301,
	0x8601,
	0x8901,
	0x8C01,
	0x8F01,
	0x9201,
	0x9501,
	0x9801,
	0x9C01,
	0x9F01,
	0xA201,
	0xA601,
	0xAA01,
	0xAD01,
	0xB101,
	0xB501,
	0xB901,
	0xBD01,
	0xC101,
	0xC501,
	0xCA01,
	0xCE01,
	0xD301,
	0xD701,
	0xDC01,
	0xE101,
	0xE601,
	0xEB01,
	0xF001,
	0xF501,
	0xFB01, // 4.0
	0x8003,
	0x8303,
	0x8603,
	0x8903,
	0x8C03,
	0x8F03,
	0x9203,
	0x9503,
	0x9803,
	0x9C03,
	0x9F03,
	0xA203,
	0xA603,
	0xAA03,
	0xAD03,
	0xB103,
	0xB503,
	0xB903,
	0xBD03,
	0xC103,
	0xC503,
	0xCA03,
	0xCE03,
	0xD303,
	0xD703,
	0xDC03,
	0xE103,
	0xE603,
	0xEB03,
	0xF003,
	0xF503,
	0xFB03, // 8.0
	0x8007,
	0x8307,
	0x8607,
	0x8907,
	0x8C07,
	0x8F07,
	0x9207,
	0x9507,
	0x9807,
	0x9C07,
	0x9F07,
	0xA207,
	0xA607,
	0xAA07,
	0xAD07,
	0xB107,
	0xB507,
	0xB907,
	0xBD07,
	0xC107,
	0xC507,
	0xCA07,
	0xCE07,
	0xD307,
	0xD707,
	0xDC07,
	0xE107,
	0xE607,
	0xEB07,
	0xF007,
	0xF507,
	0xFB07, // 16.0
	0x800F,
	0x830F,
	0x860F,
	0x890F,
	0x8C0F,
	0x8F0F,
	0x920F,
	0x950F,
	0x980F,
	0x9C0F,
	0x9F0F,
	0xA20F,
	0xA60F,
	0xAA0F,
	0xAD0F,
	0xB10F,
	0xB50F,
	0xB90F,
	0xBD0F,
	0xC10F,
	0xC50F,
	0xCA0F,
	0xCE0F,
	0xD30F,
	0xD70F,
	0xDC0F,
	0xE10F,
	0xE60F,
	0xEB0F,
	0xF00F,
	0xF50F,
	0xFB0F, // 32.0
};


#ifdef __cplusplus
}
#endif

#endif  //UTILITY_SENSOR_INC_SC1330T_SETTING_H_
