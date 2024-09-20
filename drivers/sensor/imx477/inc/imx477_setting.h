/***************************************************************************
* COPYRIGHT NOTICE
* Copyright 2019 Horizon Robotics, Inc.
* All rights reserved.
***************************************************************************/
#ifndef UTILITY_SENSOR_INC_IMX415_SETTING_H_
#define UTILITY_SENSOR_INC_IMX415_SETTING_H_

#ifdef __cplusplus
extern "C" {
#endif

static uint32_t imx477_common_regs[] = {
	0x0136, 0x18,
	0x0137, 0x00,
	0x0138, 0x01,
	0xe000, 0x00,
	0xe07a, 0x01,
	0x0808, 0x02,
	0x4ae9, 0x18,
	0x4aea, 0x08,
	0xf61c, 0x04,
	0xf61e, 0x04,
	0x4ae9, 0x21,
	0x4aea, 0x80,
	0x38a8, 0x1f,
	0x38a9, 0xff,
	0x38aa, 0x1f,
	0x38ab, 0xff,
	0x55d4, 0x00,
	0x55d5, 0x00,
	0x55d6, 0x07,
	0x55d7, 0xff,
	0x55e8, 0x07,
	0x55e9, 0xff,
	0x55ea, 0x00,
	0x55eb, 0x00,
	0x574c, 0x07,
	0x574d, 0xff,
	0x574e, 0x00,
	0x574f, 0x00,
	0x5754, 0x00,
	0x5755, 0x00,
	0x5756, 0x07,
	0x5757, 0xff,
	0x5973, 0x04,
	0x5974, 0x01,
	0x5d13, 0xc3,
	0x5d14, 0x58,
	0x5d15, 0xa3,
	0x5d16, 0x1d,
	0x5d17, 0x65,
	0x5d18, 0x8c,
	0x5d1a, 0x06,
	0x5d1b, 0xa9,
	0x5d1c, 0x45,
	0x5d1d, 0x3a,
	0x5d1e, 0xab,
	0x5d1f, 0x15,
	0x5d21, 0x0e,
	0x5d22, 0x52,
	0x5d23, 0xaa,
	0x5d24, 0x7d,
	0x5d25, 0x57,
	0x5d26, 0xa8,
	0x5d37, 0x5a,
	0x5d38, 0x5a,
	0x5d77, 0x7f,
	0x7b75, 0x0e,
	0x7b76, 0x0b,
	0x7b77, 0x08,
	0x7b78, 0x0a,
	0x7b79, 0x47,
	0x7b7c, 0x00,
	0x7b7d, 0x00,
	0x8d1f, 0x00,
	0x8d27, 0x00,
	0x9004, 0x03,
	0x9200, 0x50,
	0x9201, 0x6c,
	0x9202, 0x71,
	0x9203, 0x00,
	0x9204, 0x71,
	0x9205, 0x01,
	0x9371, 0x6a,
	0x9373, 0x6a,
	0x9375, 0x64,
	0x991a, 0x00,
	0x996b, 0x8c,
	0x996c, 0x64,
	0x996d, 0x50,
	0x9a4c, 0x0d,
	0x9a4d, 0x0d,
	0xa001, 0x0a,
	0xa003, 0x0a,
	0xa005, 0x0a,
	0xa006, 0x01,
	0xa007, 0xc0,
	0xa009, 0xc0,
	0x3d8a, 0x01,
	0x4421, 0x04,
	0x7b3b, 0x01,
	0x7b4c, 0x00,
	0x9905, 0x00,
	0x9907, 0x00,
	0x9909, 0x00,
	0x990b, 0x00,
	0x9944, 0x3c,
	0x9947, 0x3c,
	0x994a, 0x8c,
	0x994b, 0x50,
	0x994c, 0x1b,
	0x994d, 0x8c,
	0x994e, 0x50,
	0x994f, 0x1b,
	0x9950, 0x8c,
	0x9951, 0x1b,
	0x9952, 0x0a,
	0x9953, 0x8c,
	0x9954, 0x1b,
	0x9955, 0x0a,
	0x9a13, 0x04,
	0x9a14, 0x04,
	0x9a19, 0x00,
	0x9a1c, 0x04,
	0x9a1d, 0x04,
	0x9a26, 0x05,
	0x9a27, 0x05,
	0x9a2c, 0x01,
	0x9a2d, 0x03,
	0x9a2f, 0x05,
	0x9a30, 0x05,
	0x9a41, 0x00,
	0x9a46, 0x00,
	0x9a47, 0x00,
	0x9c17, 0x35,
	0x9c1d, 0x31,
	0x9c29, 0x50,
	0x9c3b, 0x2f,
	0x9c41, 0x6b,
	0x9c47, 0x2d,
	0x9c4d, 0x40,
	0x9c6b, 0x00,
	0x9c71, 0xc8,
	0x9c73, 0x32,
	0x9c75, 0x04,
	0x9c7d, 0x2d,
	0x9c83, 0x40,
	0x9c94, 0x3f,
	0x9c95, 0x3f,
	0x9c96, 0x3f,
	0x9c97, 0x00,
	0x9c98, 0x00,
	0x9c99, 0x00,
	0x9c9a, 0x3f,
	0x9c9b, 0x3f,
	0x9c9c, 0x3f,
	0x9ca0, 0x0f,
	0x9ca1, 0x0f,
	0x9ca2, 0x0f,
	0x9ca3, 0x00,
	0x9ca4, 0x00,
	0x9ca5, 0x00,
	0x9ca6, 0x1e,
	0x9ca7, 0x1e,
	0x9ca8, 0x1e,
	0x9ca9, 0x00,
	0x9caa, 0x00,
	0x9cab, 0x00,
	0x9cac, 0x09,
	0x9cad, 0x09,
	0x9cae, 0x09,
	0x9cbd, 0x50,
	0x9cbf, 0x50,
	0x9cc1, 0x50,
	0x9cc3, 0x40,
	0x9cc5, 0x40,
	0x9cc7, 0x40,
	0x9cc9, 0x0a,
	0x9ccb, 0x0a,
	0x9ccd, 0x0a,
	0x9d17, 0x35,
	0x9d1d, 0x31,
	0x9d29, 0x50,
	0x9d3b, 0x2f,
	0x9d41, 0x6b,
	0x9d47, 0x42,
	0x9d4d, 0x5a,
	0x9d6b, 0x00,
	0x9d71, 0xc8,
	0x9d73, 0x32,
	0x9d75, 0x04,
	0x9d7d, 0x42,
	0x9d83, 0x5a,
	0x9d94, 0x3f,
	0x9d95, 0x3f,
	0x9d96, 0x3f,
	0x9d97, 0x00,
	0x9d98, 0x00,
	0x9d99, 0x00,
	0x9d9a, 0x3f,
	0x9d9b, 0x3f,
	0x9d9c, 0x3f,
	0x9d9d, 0x1f,
	0x9d9e, 0x1f,
	0x9d9f, 0x1f,
	0x9da0, 0x0f,
	0x9da1, 0x0f,
	0x9da2, 0x0f,
	0x9da3, 0x00,
	0x9da4, 0x00,
	0x9da5, 0x00,
	0x9da6, 0x1e,
	0x9da7, 0x1e,
	0x9da8, 0x1e,
	0x9da9, 0x00,
	0x9daa, 0x00,
	0x9dab, 0x00,
	0x9dac, 0x09,
	0x9dad, 0x09,
	0x9dae, 0x09,
	0x9dc9, 0x0a,
	0x9dcb, 0x0a,
	0x9dcd, 0x0a,
	0x9e17, 0x35,
	0x9e1d, 0x31,
	0x9e29, 0x50,
	0x9e3b, 0x2f,
	0x9e41, 0x6b,
	0x9e47, 0x2d,
	0x9e4d, 0x40,
	0x9e6b, 0x00,
	0x9e71, 0xc8,
	0x9e73, 0x32,
	0x9e75, 0x04,
	0x9e94, 0x0f,
	0x9e95, 0x0f,
	0x9e96, 0x0f,
	0x9e97, 0x00,
	0x9e98, 0x00,
	0x9e99, 0x00,
	0x9ea0, 0x0f,
	0x9ea1, 0x0f,
	0x9ea2, 0x0f,
	0x9ea3, 0x00,
	0x9ea4, 0x00,
	0x9ea5, 0x00,
	0x9ea6, 0x3f,
	0x9ea7, 0x3f,
	0x9ea8, 0x3f,
	0x9ea9, 0x00,
	0x9eaa, 0x00,
	0x9eab, 0x00,
	0x9eac, 0x09,
	0x9ead, 0x09,
	0x9eae, 0x09,
	0x9ec9, 0x0a,
	0x9ecb, 0x0a,
	0x9ecd, 0x0a,
	0x9f17, 0x35,
	0x9f1d, 0x31,
	0x9f29, 0x50,
	0x9f3b, 0x2f,
	0x9f41, 0x6b,
	0x9f47, 0x42,
	0x9f4d, 0x5a,
	0x9f6b, 0x00,
	0x9f71, 0xc8,
	0x9f73, 0x32,
	0x9f75, 0x04,
	0x9f94, 0x0f,
	0x9f95, 0x0f,
	0x9f96, 0x0f,
	0x9f97, 0x00,
	0x9f98, 0x00,
	0x9f99, 0x00,
	0x9f9a, 0x2f,
	0x9f9b, 0x2f,
	0x9f9c, 0x2f,
	0x9f9d, 0x00,
	0x9f9e, 0x00,
	0x9f9f, 0x00,
	0x9fa0, 0x0f,
	0x9fa1, 0x0f,
	0x9fa2, 0x0f,
	0x9fa3, 0x00,
	0x9fa4, 0x00,
	0x9fa5, 0x00,
	0x9fa6, 0x1e,
	0x9fa7, 0x1e,
	0x9fa8, 0x1e,
	0x9fa9, 0x00,
	0x9faa, 0x00,
	0x9fab, 0x00,
	0x9fac, 0x09,
	0x9fad, 0x09,
	0x9fae, 0x09,
	0x9fc9, 0x0a,
	0x9fcb, 0x0a,
	0x9fcd, 0x0a,
	0xa14b, 0xff,
	0xa151, 0x0c,
	0xa153, 0x50,
	0xa155, 0x02,
	0xa157, 0x00,
	0xa1ad, 0xff,
	0xa1b3, 0x0c,
	0xa1b5, 0x50,
	0xa1b9, 0x00,
	0xa24b, 0xff,
	0xa257, 0x00,
	0xa2ad, 0xff,
	0xa2b9, 0x00,
	0xb21f, 0x04,
	0xb35c, 0x00,
	0xb35e, 0x08,
	0x0112, 0x0c,
	0x0113, 0x0c,
	0x0114, 0x01,
	0x0350, 0x00,
	0xbcf1, 0x02,
	0x3ff9, 0x01,
};

static uint32_t imx477_image_quality[] = {
	0x3D8A, 0x01,
	0x7B3B, 0x01,
	0x7B4C, 0x00,
	0x9905, 0x00,
	0x9907, 0x00,
	0x9909, 0x00,
	0x990B, 0x00,
	0x9944, 0x3C,
	0x9947, 0x3C,
	0x994A, 0x8C,
	0x994B, 0x50,
	0x994C, 0x1B,
	0x994D, 0x8C,
	0x994E, 0x50,
	0x994F, 0x1B,
	0x9950, 0x8C,
	0x9951, 0x1B,
	0x9952, 0x0A,
	0x9953, 0x8C,
	0x9954, 0x1B,
	0x9955, 0x0A,
	0x9A13, 0x04,
	0x9A14, 0x04,
	0x9A19, 0x00,
	0x9A1C, 0x04,
	0x9A1D, 0x04,
	0x9A26, 0x05,
	0x9A27, 0x05,
	0x9A2C, 0x01,
	0x9A2D, 0x03,
	0x9A2F, 0x05,
	0x9A30, 0x05,
	0x9A41, 0x00,
	0x9A46, 0x00,
	0x9A47, 0x00,
	0x9C17, 0x35,
	0x9C1D, 0x31,
	0x9C29, 0x50,
	0x9C3B, 0x2F,
	0x9C41, 0x6B,
	0x9C47, 0x2D,
	0x9C4D, 0x40,
	0x9C6B, 0x00,
	0x9C71, 0xC8,
	0x9C73, 0x32,
	0x9C75, 0x04,
	0x9C7D, 0x2D,
	0x9C83, 0x40,
	0x9C94, 0x3F,
	0x9C95, 0x3F,
	0x9C96, 0x3F,
	0x9C97, 0x00,
	0x9C98, 0x00,
	0x9C99, 0x00,
	0x9C9A, 0x3F,
	0x9C9B, 0x3F,
	0x9C9C, 0x3F,
	0x9CA0, 0x0F,
	0x9CA1, 0x0F,
	0x9CA2, 0x0F,
	0x9CA3, 0x00,
	0x9CA4, 0x00,
	0x9CA5, 0x00,
	0x9CA6, 0x1E,
	0x9CA7, 0x1E,
	0x9CA8, 0x1E,
	0x9CA9, 0x00,
	0x9CAA, 0x00,
	0x9CAB, 0x00,
	0x9CAC, 0x09,
	0x9CAD, 0x09,
	0x9CAE, 0x09,
	0x9CBD, 0x50,
	0x9CBF, 0x50,
	0x9CC1, 0x50,
	0x9CC3, 0x40,
	0x9CC5, 0x40,
	0x9CC7, 0x40,
	0x9CC9, 0x0A,
	0x9CCB, 0x0A,
	0x9CCD, 0x0A,
	0x9D17, 0x35,
	0x9D1D, 0x31,
	0x9D29, 0x50,
	0x9D3B, 0x2F,
	0x9D41, 0x6B,
	0x9D47, 0x42,
	0x9D4D, 0x5A,
	0x9D6B, 0x00,
	0x9D71, 0xC8,
	0x9D73, 0x32,
	0x9D75, 0x04,
	0x9D7D, 0x42,
	0x9D83, 0x5A,
	0x9D94, 0x3F,
	0x9D95, 0x3F,
	0x9D96, 0x3F,
	0x9D97, 0x00,
	0x9D98, 0x00,
	0x9D99, 0x00,
	0x9D9A, 0x3F,
	0x9D9B, 0x3F,
	0x9D9C, 0x3F,
	0x9D9D, 0x1F,
	0x9D9E, 0x1F,
	0x9D9F, 0x1F,
	0x9DA0, 0x0F,
	0x9DA1, 0x0F,
	0x9DA2, 0x0F,
	0x9DA3, 0x00,
	0x9DA4, 0x00,
	0x9DA5, 0x00,
	0x9DA6, 0x1E,
	0x9DA7, 0x1E,
	0x9DA8, 0x1E,
	0x9DA9, 0x00,
	0x9DAA, 0x00,
	0x9DAB, 0x00,
	0x9DAC, 0x09,
	0x9DAD, 0x09,
	0x9DAE, 0x09,
	0x9DC9, 0x0A,
	0x9DCB, 0x0A,
	0x9DCD, 0x0A,
	0x9E17, 0x35,
	0x9E1D, 0x31,
	0x9E29, 0x50,
	0x9E3B, 0x2F,
	0x9E41, 0x6B,
	0x9E47, 0x2D,
	0x9E4D, 0x40,
	0x9E6B, 0x00,
	0x9E71, 0xC8,
	0x9E73, 0x32,
	0x9E75, 0x04,
	0x9E94, 0x0F,
	0x9E95, 0x0F,
	0x9E96, 0x0F,
	0x9E97, 0x00,
	0x9E98, 0x00,
	0x9E99, 0x00,
	0x9EA0, 0x0F,
	0x9EA1, 0x0F,
	0x9EA2, 0x0F,
	0x9EA3, 0x00,
	0x9EA4, 0x00,
	0x9EA5, 0x00,
	0x9EA6, 0x3F,
	0x9EA7, 0x3F,
	0x9EA8, 0x3F,
	0x9EA9, 0x00,
	0x9EAA, 0x00,
	0x9EAB, 0x00,
	0x9EAC, 0x09,
	0x9EAD, 0x09,
	0x9EAE, 0x09,
	0x9EC9, 0x0A,
	0x9ECB, 0x0A,
	0x9ECD, 0x0A,
	0x9F17, 0x35,
	0x9F1D, 0x31,
	0x9F29, 0x50,
	0x9F3B, 0x2F,
	0x9F41, 0x6B,
	0x9F47, 0x42,
	0x9F4D, 0x5A,
	0x9F6B, 0x00,
	0x9F71, 0xC8,
	0x9F73, 0x32,
	0x9F75, 0x04,
	0x9F94, 0x0F,
	0x9F95, 0x0F,
	0x9F96, 0x0F,
	0x9F97, 0x00,
	0x9F98, 0x00,
	0x9F99, 0x00,
	0x9F9A, 0x2F,
	0x9F9B, 0x2F,
	0x9F9C, 0x2F,
	0x9F9D, 0x00,
	0x9F9E, 0x00,
	0x9F9F, 0x00,
	0x9FA0, 0x0F,
	0x9FA1, 0x0F,
	0x9FA2, 0x0F,
	0x9FA3, 0x00,
	0x9FA4, 0x00,
	0x9FA5, 0x00,
	0x9FA6, 0x1E,
	0x9FA7, 0x1E,
	0x9FA8, 0x1E,
	0x9FA9, 0x00,
	0x9FAA, 0x00,
	0x9FAB, 0x00,
	0x9FAC, 0x09,
	0x9FAD, 0x09,
	0x9FAE, 0x09,
	0x9FC9, 0x0A,
	0x9FCB, 0x0A,
	0x9FCD, 0x0A,
	0xA14B, 0xFF,
	0xA151, 0x0C,
	0xA153, 0x50,
	0xA155, 0x02,
	0xA157, 0x00,
	0xA1AD, 0xFF,
	0xA1B3, 0x0C,
	0xA1B5, 0x50,
	0xA1B9, 0x00,
	0xA24B, 0xFF,
	0xA257, 0x00,
	0xA2AD, 0xFF,
	0xA2B9, 0x00,
	0xB21F, 0x04,
	0xB35C, 0x00,
	0xB35E, 0x08,
};
static uint32_t imx477_990p_10fps_setting[] = {
	0x420b, 0x01,
	0x990c, 0x00,
	0x990d, 0x08,
	0x9956, 0x8c,
	0x9957, 0x64,
	0x9958, 0x50,
	0x9a48, 0x06,
	0x9a49, 0x06,
	0x9a4a, 0x06,
	0x9a4b, 0x06,
	0x9a4c, 0x06,
	0x9a4d, 0x06,
	0x0112, 0x0a,
	0x0113, 0x0a,
	0x0114, 0x01,
	0x0342, 0x1a,
	0x0343, 0x08,
	0x0340, 0x04,
	0x0341, 0x1a,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x02,
	0x0347, 0x10,
	0x0348, 0x0f,
	0x0349, 0xd7,
	0x034a, 0x09,
	0x034b, 0xcf,
	0x00e3, 0x00,
	0x00e4, 0x00,
	0x00fc, 0x0a,
	0x00fd, 0x0a,
	0x00fe, 0x0a,
	0x00ff, 0x0a,
	0xe013, 0x00,
	0x0220, 0x00,
	0x0221, 0x11,
	0x0381, 0x01,
	0x0383, 0x01,
	0x0385, 0x01,
	0x0387, 0x01,
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x02,
	0x3140, 0x02,
	0x3c00, 0x00,
	0x3c01, 0x01,
	0x3c02, 0x9c,
	0x3f0d, 0x00,
	0x5748, 0x00,
	0x5749, 0x00,
	0x574a, 0x00,
	0x574b, 0xa4,
	0x7b75, 0x0e,
	0x7b76, 0x09,
	0x7b77, 0x08,
	0x7b78, 0x06,
	0x7b79, 0x34,
	0x7b53, 0x00,
	0x9369, 0x73,
	0x936b, 0x64,
	0x936d, 0x5f,
	0x9304, 0x03,
	0x9305, 0x80,
	0x9e9a, 0x2f,
	0x9e9b, 0x2f,
	0x9e9c, 0x2f,
	0x9e9d, 0x00,
	0x9e9e, 0x00,
	0x9e9f, 0x00,
	0xa2a9, 0x27,
	0xa2b7, 0x03,
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x01,
	0x0409, 0x5c,
	0x040a, 0x00,
	0x040b, 0x00,
	0x040c, 0x05,
	0x040d, 0x34,
	0x040e, 0x03,
	0x040f, 0xde,
	0x034c, 0x05,
	0x034d, 0x00,
	0x034e, 0x03,
	0x034f, 0xc0,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0xaf,
	0x0309, 0x0a,
	0x030b, 0x02,
	0x030d, 0x02,
	0x030e, 0x00,
	0x030f, 0x96,
	0x0310, 0x01,
	0x0820, 0x07,
	0x0821, 0x08,
	0x0822, 0x00,
	0x0823, 0x00,
	0x080a, 0x00,
	0x080b, 0x7f,
	0x080c, 0x00,
	0x080d, 0x4f,
	0x080e, 0x00,
	0x080f, 0x77,
	0x0810, 0x00,
	0x0811, 0x5f,
	0x0812, 0x00,
	0x0813, 0x57,
	0x0814, 0x00,
	0x0815, 0x4f,
	0x0816, 0x01,
	0x0817, 0x27,
	0x0818, 0x00,
	0x0819, 0x3f,
	0xe04c, 0x00,
	0xe04d, 0x5f,
	0xe04e, 0x00,
	0xe04f, 0x1f,
	0x3e20, 0x01,
	0x3e37, 0x00,
	0x3f50, 0x00,
	0x3f56, 0x00,
	0x3f57, 0xbf,
};

static uint32_t imx477_1520p_10fps_setting[] = {
	0x0342, 0x31,
	0x0343, 0xc4,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x00,
	0x0347, 0x00,
	0x0348, 0x0f,
	0x0349, 0xd7,
	0x034a, 0x0b,
	0x034b, 0xdf,
	0x0220, 0x00,
	0x0221, 0x11,
	0x0381, 0x01,
	0x0383, 0x01,
	0x0385, 0x01,
	0x0387, 0x01,
	0x0900, 0x01,
	0x0901, 0x12,
	0x0902, 0x02,
	0x3140, 0x02,
	0x3c00, 0x00,
	0x3c01, 0x03,
	0x3c02, 0xa2,
	0x3f0d, 0x01,
	0x5748, 0x07,
	0x5749, 0xff,
	0x574a, 0x00,
	0x574b, 0x00,
	0x7b53, 0x01,
	0x9369, 0x73,
	0x936b, 0x64,
	0x936d, 0x5f,
	0x9304, 0x00,
	0x9305, 0x00,
	0x9e9a, 0x2f,
	0x9e9b, 0x2f,
	0x9e9c, 0x2f,
	0x9e9d, 0x00,
	0x9e9e, 0x00,
	0x9e9f, 0x00,
	0xa2a9, 0x60,
	0xa2b7, 0x00,
	0x0401, 0x01,
	0x0404, 0x00,
	0x0405, 0x20,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040a, 0x00,
	0x040b, 0x00,
	0x040c, 0x0f,
	0x040d, 0xd8,
	0x040e, 0x0b,
	0x040f, 0xe0,
	0x034c, 0x07,
	0x034d, 0xe0,
	0x034e, 0x05,
	0x034f, 0xf0,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x5e,
	0x0309, 0x0c,
	0x030b, 0x02,
	0x030d, 0x02,
	0x030e, 0x00,
	0x030f, 0x96,
	0x0310, 0x01,
	0x0820, 0x07,
	0x0821, 0x08,
	0x0822, 0x00,
	0x0823, 0x00,
	0x080a, 0x00,
	0x080b, 0x7f,
	0x080c, 0x00,
	0x080d, 0x4f,
	0x080e, 0x00,
	0x080f, 0x77,
	0x0810, 0x00,
	0x0811, 0x5f,
	0x0812, 0x00,
	0x0813, 0x57,
	0x0814, 0x00,
	0x0815, 0x4f,
	0x0816, 0x01,
	0x0817, 0x27,
	0x0818, 0x00,
	0x0819, 0x3f,
	0xe04c, 0x00,
	0xe04d, 0x7f,
	0xe04e, 0x00,
	0xe04f, 0x1f,
	0x3e20, 0x01,
	0x3e37, 0x00,
	0x3f50, 0x00,
	0x3f56, 0x01,
	0x3f57, 0x6c
};

static uint32_t imx477_3000p_10fps_setting[] = {
	0x0342, 0x5d,
	0x0343, 0xc0,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x00,
	0x0347, 0x00,
	0x0348, 0x0f,
	0x0349, 0xd7,
	0x034a, 0x0b,
	0x034b, 0xdf,
	0x00e3, 0x00,
	0x00e4, 0x00,
	0x00fc, 0x0a,
	0x00fd, 0x0a,
	0x00fe, 0x0a,
	0x00ff, 0x0a,
	0x0220, 0x00,
	0x0221, 0x11,
	0x0381, 0x01,
	0x0383, 0x01,
	0x0385, 0x01,
	0x0387, 0x01,
	0x0900, 0x00,
	0x0901, 0x11,
	0x0902, 0x02,
	0x3140, 0x02,
	0x3c00, 0x00,
	0x3c01, 0x03,
	0x3c02, 0xa2,
	0x3f0d, 0x01,
	0x5748, 0x07,
	0x5749, 0xff,
	0x574a, 0x00,
	0x574b, 0x00,
	0x7b75, 0x0a,
	0x7b76, 0x0c,
	0x7b77, 0x07,
	0x7b78, 0x06,
	0x7b79, 0x3c,
	0x7b53, 0x01,
	0x9369, 0x5a,
	0x936b, 0x55,
	0x936d, 0x28,
	0x9304, 0x00,
	0x9305, 0x00,
	0x9e9a, 0x2f,
	0x9e9b, 0x2f,
	0x9e9c, 0x2f,
	0x9e9d, 0x00,
	0x9e9e, 0x00,
	0x9e9f, 0x00,
	0xa2a9, 0x60,
	0xa2b7, 0x00,
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040a, 0x00,
	0x040b, 0x00,
	0x040c, 0x0f,
	0x040d, 0xd8,
	0x040e, 0x0b,
	0x040f, 0xe0,

	// 0x034c, 0x0f,
	// 0x034d, 0xd8,
	// 0x034e, 0x0b,
	// 0x034f, 0xe0,

	0x034c, 0x0f,
	0x034d, 0xA0,
	0x034e, 0x0b,
	0x034f, 0xB8,

	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x5e,
	0x0309, 0x0c,
	0x030b, 0x02,
	0x030d, 0x02,
	0x030e, 0x00,
	0x030f, 0x96,
	0x0310, 0x01,
	0x0820, 0x07,
	0x0821, 0x08,
	0x0822, 0x00,
	0x0823, 0x00,
	0x080a, 0x00,
	0x080b, 0x7f,
	0x080c, 0x00,
	0x080d, 0x4f,
	0x080e, 0x00,
	0x080f, 0x77,
	0x0810, 0x00,
	0x0811, 0x5f,
	0x0812, 0x00,
	0x0813, 0x57,
	0x0814, 0x00,
	0x0815, 0x4f,
	0x0816, 0x01,
	0x0817, 0x27,
	0x0818, 0x00,
	0x0819, 0x3f,
	0xe04c, 0x00,
	0xe04d, 0x7f,
	0xe04e, 0x00,
	0xe04f, 0x1f,
	0x3e20, 0x01,
	0x3e37, 0x00,
	0x3f50, 0x00,
	0x3f56, 0x02,
	0x3f57, 0xae,
};

static uint32_t imx477_1080p_50fps_setting[] = {
	0x0340, 0x05, // frame_length
	0x0341, 0x21, 
	0x0342, 0x0B, // line_length
	0x0343, 0xA0, 
	0x0342, 0x31,
	0x0343, 0xc4,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x01,
	0x0347, 0xb8,
	0x0348, 0x0f,
	0x0349, 0xd7,
	0x034a, 0x0a,
	0x034b, 0x27,
	0x0220, 0x00,
	0x0221, 0x11,
	0x0381, 0x01,
	0x0383, 0x01,
	0x0385, 0x01,
	0x0387, 0x01,
	0x0900, 0x01,
	0x0901, 0x12,
	0x0902, 0x02,
	0x3140, 0x02,
	0x3c00, 0x00,
	0x3c01, 0x03,
	0x3c02, 0xa2,
	0x3f0d, 0x01,
	0x5748, 0x07,
	0x5749, 0xff,
	0x574a, 0x00,
	0x574b, 0x00,
	0x7b53, 0x01,
	0x9369, 0x73,
	0x936b, 0x64,
	0x936d, 0x5f,
	0x9304, 0x00,
	0x9305, 0x00,
	0x9e9a, 0x2f,
	0x9e9b, 0x2f,
	0x9e9c, 0x2f,
	0x9e9d, 0x00,
	0x9e9e, 0x00,
	0x9e9f, 0x00,
	0xa2a9, 0x60,
	0xa2b7, 0x00,
	0x0401, 0x01,
	0x0404, 0x00,
	0x0405, 0x20,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040a, 0x00,
	0x040b, 0x00,
	0x040c, 0x0f,
	0x040d, 0xd8,
	0x040e, 0x04,
	0x040f, 0x38,
	0x034c, 0x07,
	// 0x034d, 0xec,
	0x034d, 0x80,
	0x034e, 0x04,
	0x034f, 0x38,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x04,
	0x0306, 0x01,
	0x0307, 0x5e,
	0x0309, 0x0c,
	0x030b, 0x02,
	0x030d, 0x02,
	0x030e, 0x00,
	0x030f, 0x96,
	0x0310, 0x01,
	0x0820, 0x07,
	0x0821, 0x08,
	0x0822, 0x00,
	0x0823, 0x00,
	0x080a, 0x00,
	0x080b, 0x7f,
	0x080c, 0x00,
	0x080d, 0x4f,
	0x080e, 0x00,
	0x080f, 0x77,
	0x0810, 0x00,
	0x0811, 0x5f,
	0x0812, 0x00,
	0x0813, 0x57,
	0x0814, 0x00,
	0x0815, 0x4f,
	0x0816, 0x01,
	0x0817, 0x27,
	0x0818, 0x00,
	0x0819, 0x3f,
	0xe04c, 0x00,
	0xe04d, 0x7f,
	0xe04e, 0x00,
	0xe04f, 0x1f,
	0x3e20, 0x01,
	0x3e37, 0x00,
	0x3f50, 0x00,
	0x3f56, 0x01,
	0x3f57, 0x6c,
	// 0x0100, 0x01,
};

static uint32_t imx477_stream_on_setting[] = {
        0x0100, 0x01
};

static uint32_t imx477_stream_off_setting[] = {
        0x0100, 0x00,
};

static uint32_t imx477_gain_lut[] = {
	0x000,
	0x014,
	0x02B,
	0x040,
	0x055,
	0x069,
	0x07D,
	0x090,
	0x0A3,
	0x0B5,
	0x0C8,
	0x0D9,
	0x0EA,
	0x0FB,
	0x10C,
	0x11C,
	0x12C,
	0x13B,
	0x14B,
	0x159,
	0x168,
	0x177,
	0x184,
	0x192,
	0x19F,
	0x1AC,
	0x1B9,
	0x1C5,
	0x1D1,
	0x1DD,
	0x1E9,
	0x1F5,
	0x200,
	0x20B,
	0x216,
	0x220,
	0x22A,
	0x235,
	0x23F,
	0x248,
	0x252,
	0x25B,
	0x264,
	0x26D,
	0x275,
	0x27E,
	0x286,
	0x28E,
	0x296,
	0x29E,
	0x2A5,
	0x2AD,
	0x2B4,
	0x2BB,
	0x2C2,
	0x2C9,
	0x2CF,
	0x2D6,
	0x2DD,
	0x2E2,
	0x2E9,
	0x2EF,
	0x2F5,
	0x2FA,
	0x300,
	0x306,
	0x30B,
	0x310,
	0x315,
	0x31A,
	0x31F,
	0x324,
	0x329,
	0x32D,
	0x332,
	0x336,
	0x33A,
	0x33F,
	0x343,
	0x347,
	0x34B,
	0x34F,
	0x353,
	0x357,
	0x35A,
	0x35D,
	0x361,
	0x365,
	0x368,
	0x36B,
	0x36F,
	0x372,
	0x375,
	0x377,
	0x37A,
	0x37D,
	0x380,
	0x383,
	0x386,
	0x388,
	0x38B,
	0x38E,
	0x38F,
	0x392,
	0x394,
	0x397,
	0x399,
	0x39B,
	0x39D,
	0x39F,
	0x3A2,
	0x3A4,
	0x3A5,
	0x3A7,
	0x3A9,
	0x3AB,
	0x3AD,
	0x3AF,
	0x3B1,
	0x3B2,
	0x3B4,
	0x3B5,
	0x3B7,
	0x3B9,
	0x3BA,
	0x3BC,
	0x3BE,
	0x3BE,
	0x3C0,
	0x3C1,
	0x3C3,
	0x3C4,
	0x3C5,
	0x3C7,
	0x3C8,
	0x3CA,
	0x3CA,
	0x3CB,
	0x3CC,
	0x3CE,
	0x3CF,
	0x3D0,
	0x3D1,
	0x3D2,
};

#ifdef __cplusplus
}
#endif

#endif  // UTILITY_SENSOR_INC_IMX415_SETTING_H_

