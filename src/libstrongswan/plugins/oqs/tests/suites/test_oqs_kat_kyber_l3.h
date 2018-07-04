	{
		.mechanism = QSKE_KYBER_L3,
		.count = 0,
		.seed = chunk_from_chars(
			0x06,0x15,0x50,0x23,0x4D,0x15,0x8C,0x5E,0xC9,0x55,
			0x95,0xFE,0x04,0xEF,0x7A,0x25,0x76,0x7F,0x2E,0x24,
			0xCC,0x2B,0xC4,0x79,0xD0,0x9D,0x86,0xDC,0x9A,0xBC,
			0xFD,0xE7,0x05,0x6A,0x8C,0x26,0x6F,0x9E,0xF9,0x7E,
			0xD0,0x85,0x41,0xDB,0xD2,0xE1,0xFF,0xA1),
		.pk = chunk_from_chars(
			0xCF,0xAA,0x6F,0xBD,0xFD,0xC9,0x2E,0xF0,0x43,0xD5,
			0xD5,0x11,0x77,0x64,0xCB,0xCC,0x89,0x18,0x30,0xB2,
			0xFB,0x67,0x7D,0x99,0x6E,0x12,0x0E,0x62,0x0E,0x35,
			0x5D,0x00,0x98,0x4E,0xEF,0x35,0x66,0xF3,0xB7,0xBF,
			0x05,0x33,0x5D,0x94,0xB7,0x20,0x28,0xAE,0xE2,0x06,
			0x4F,0x28,0x99,0x68,0x82,0xF5,0xCF,0x9D,0x61,0x12,
			0x9C,0xD9,0x15,0xC6,0x51,0xF4,0x56,0x6E,0x8C,0xB6,
			0xD8,0x19,0xB8,0x5A,0xBC,0xD0,0x60,0x9B,0x77,0x0B,
			0xFF,0x8E,0x1E,0x0A,0xBF,0x9C,0xBD,0xD7,0xC7,0x24,
			0x68,0x2C,0x5F,0x9F,0x84,0x9A,0xE5,0x57,0x47,0xF5, /* 100 */

			0xFC,0x67,0x7C,0x7A,0xAA,0x61,0x37,0xAB,0x5E,0xF5,
			0x78,0x4E,0xB6,0xBB,0xDB,0xD8,0xF8,0x61,0x12,0x2E,
			0x9A,0x1E,0x61,0xE5,0xA3,0x12,0x8D,0x07,0x6E,0x6E,
			0xA8,0x5F,0x32,0xCD,0x14,0x54,0x94,0x4E,0x3C,0x7D,
			0x68,0xD5,0x81,0x95,0x7A,0x00,0x56,0x5C,0xBB,0x4F,
			0xFA,0x09,0x21,0x6D,0xE3,0x86,0xA5,0x2F,0x9E,0xB2,
			0x8E,0xBB,0x8A,0x5C,0x4E,0x68,0x9F,0xE3,0x55,0x71,
			0x9E,0x29,0xA1,0xAB,0x5D,0x94,0x84,0xF5,0x13,0x53,
			0xC5,0x71,0x84,0x49,0x75,0xEA,0xDF,0x51,0xAF,0xDB,
			0x55,0xE6,0x6E,0x46,0x6C,0x90,0x52,0x93,0xFC,0xC9, /* 200 */

			0x7A,0xAD,0xB1,0x0B,0x15,0x9D,0xD3,0x3F,0xDE,0x73,
			0xEE,0xDF,0xDF,0xAA,0x53,0xCB,0xD1,0x59,0x2A,0x70,
			0x4D,0xF4,0x1B,0x7B,0xED,0xBB,0xA5,0xD7,0x20,0x9E,
			0x80,0xB0,0x7D,0xE5,0xF5,0x5E,0xD2,0x52,0xDA,0x64,
			0x84,0xC9,0x8C,0xDF,0x0C,0x68,0xB9,0xE6,0xAD,0x6B,
			0xDA,0xAC,0x53,0x52,0x7B,0xEB,0x1E,0x8F,0xCC,0x6E,
			0x70,0x03,0x58,0xDB,0xEF,0x41,0xDC,0xCE,0x31,0xB7,
			0xB8,0x33,0x9C,0x2F,0x7D,0x76,0xF2,0xBF,0x2A,0x37,
			0xF3,0xB0,0xC2,0x5C,0x35,0x1B,0x51,0x77,0x97,0x81,
			0xE1,0x75,0x90,0x63,0x6A,0xFE,0xED,0x42,0x09,0x9B, /* 300 */

			0x2A,0x0A,0x3F,0x66,0xE4,0xA1,0xF2,0x63,0x03,0x03,
			0x1A,0xFC,0xEF,0xAF,0x14,0x22,0xCF,0xB8,0xC7,0x5C,
			0x1D,0x9F,0xD6,0xED,0xA9,0x90,0xA7,0x10,0x7D,0xFD,
			0xB7,0x5C,0x1A,0xDA,0x19,0x96,0x97,0xAD,0xBD,0xE1,
			0x63,0xDF,0x6C,0xDB,0x9E,0x93,0xB7,0xB8,0x33,0xEA,
			0xAA,0x81,0x90,0x56,0x45,0xE3,0x6D,0xC0,0x01,0x62,
			0xCC,0xAB,0xDE,0x44,0x53,0x80,0x61,0x7D,0xB9,0x95,
			0xF8,0xD0,0x36,0x35,0xF0,0x29,0x68,0x05,0x06,0x4E,
			0x36,0xC2,0xB9,0x9D,0x56,0x71,0x02,0xE5,0x39,0x0B,
			0xDF,0x5E,0xEC,0xEC,0xE2,0x54,0xD0,0x91,0x85,0xED, /* 400 */

			0x51,0x72,0xD9,0x70,0x25,0xB7,0xF2,0xED,0x2B,0xF3,
			0xD0,0x50,0x4D,0x27,0xAB,0x44,0xF2,0x34,0x5B,0x80,
			0xB6,0x64,0xED,0x74,0xCB,0x86,0x00,0xDA,0x5C,0xB5,
			0x4C,0x5C,0x9F,0x33,0xA5,0xF5,0x3A,0xC9,0x60,0x9C,
			0x26,0x6E,0xCA,0x3D,0xBB,0x09,0x17,0x26,0x72,0x05,
			0xFC,0x61,0x0F,0x13,0xFA,0x6D,0xB5,0xDB,0xED,0x00,
			0xFB,0x06,0xD2,0xDE,0x83,0x03,0xFC,0xE7,0x5C,0x9E,
			0xFB,0x17,0x8A,0x76,0xA8,0xE3,0x50,0x1B,0xAC,0x64,
			0xD7,0x07,0x8B,0xF1,0x29,0xDA,0xEB,0x1E,0x82,0x66,
			0xD6,0xB9,0x0E,0x80,0x91,0xAE,0x9D,0xCD,0xDC,0x90, /* 500 */

			0x9C,0x4B,0xC4,0xCD,0xE3,0x4C,0x2D,0x1D,0x96,0xF5,
			0xF7,0x32,0xBD,0x36,0x8F,0xCA,0xC9,0x21,0xA3,0xEF,
			0xB6,0xF9,0x2B,0xC4,0xBA,0xE0,0x27,0xD4,0x51,0x91,
			0xEE,0x16,0x8F,0x92,0xF1,0xC5,0x79,0xE6,0x07,0x00,
			0x15,0x7B,0x0A,0xCC,0x79,0x4F,0xDC,0xB0,0xEE,0xA1,
			0x2C,0x11,0x13,0xE9,0x59,0xB9,0x88,0x2A,0x3D,0x54,
			0xDA,0xE6,0xD4,0xB9,0xE1,0x98,0x66,0x15,0x0D,0xFA,
			0xFF,0x60,0x44,0x6C,0xBA,0x0E,0xB9,0x6B,0x22,0x8A,
			0x2A,0x51,0x36,0x12,0xA2,0x6B,0xE1,0xBF,0xBE,0x94,
			0xF4,0xFD,0xE3,0x60,0x23,0x7B,0x32,0x6D,0x8B,0xF0, /* 600 */

			0xC9,0x78,0xCA,0xA5,0x6A,0xD7,0xFA,0x9A,0xA7,0xDC,
			0xD8,0xD8,0x91,0x9F,0x0A,0x51,0xDA,0xFC,0x81,0x7D,
			0xD6,0xAA,0xDC,0x89,0xF5,0x1D,0xE6,0x25,0x59,0x78,
			0xAC,0x01,0xED,0xE1,0x87,0x60,0x3B,0x36,0x7B,0x74,
			0x98,0xC9,0xA5,0xDB,0xAB,0x27,0x2D,0xFD,0x83,0xC2,
			0xD3,0x77,0x69,0x2A,0x58,0xE5,0x13,0xC6,0xA2,0xB8,
			0xBE,0x40,0xE9,0xED,0x24,0x45,0xBF,0xC5,0x07,0x57,
			0x50,0xCE,0x7E,0xD6,0xEB,0x39,0x27,0x12,0xB6,0x6C,
			0x20,0x91,0xAA,0xA9,0xC4,0x49,0xCA,0xF1,0x85,0xEE,
			0xD0,0x8F,0x2A,0xC5,0x65,0x67,0xF4,0xA2,0x67,0xD5, /* 700 */

			0x8F,0x25,0x08,0x3B,0x31,0x59,0x62,0xCE,0x60,0x60,
			0x33,0x20,0xFE,0x01,0xC2,0xF9,0xCF,0xD4,0x61,0x03,
			0xAB,0x25,0x88,0x65,0x60,0xA1,0xEA,0x2E,0x70,0xEC,
			0x95,0xB5,0xB8,0x03,0x56,0x6E,0xA3,0xBA,0x2A,0xD8,
			0x82,0x63,0xAD,0x45,0xFE,0x39,0xAB,0x02,0x45,0xA8,
			0x14,0xC9,0xB1,0x86,0x7B,0x9D,0x30,0xD7,0xCD,0xAC,
			0x44,0x95,0x34,0xB4,0xD1,0x11,0x89,0xE2,0x42,0x50,
			0xE9,0xB6,0x02,0xF2,0x98,0x26,0xEC,0xF7,0x54,0xB7,
			0xEC,0xFC,0xA4,0xF5,0x92,0x62,0xCA,0x68,0xBD,0xA7,
			0x42,0x5F,0x4D,0x14,0xEB,0xA8,0xF2,0x40,0x99,0x80, /* 800 */

			0x1D,0x21,0x96,0xC8,0xDF,0x0C,0xC3,0x34,0xA0,0x54,
			0x38,0xA9,0xA2,0xF9,0x77,0x41,0x6B,0x5D,0x7C,0x87,
			0x4A,0x2D,0x96,0x4A,0xB2,0xFE,0x21,0x0A,0x5F,0x6B,
			0x54,0x71,0xA3,0x0C,0x9C,0x2C,0x41,0x36,0xB2,0xE4,
			0xF9,0x67,0x7E,0xB3,0x20,0x73,0x75,0xFC,0xB2,0x89,
			0x06,0x47,0x16,0x44,0x0D,0xD7,0x59,0x66,0x12,0x23,
			0x20,0x5D,0x9F,0xA1,0x27,0xCE,0x95,0xD0,0x14,0xE8,
			0x92,0xD0,0x1F,0x02,0xE1,0x7C,0x27,0xD2,0x47,0x3E,
			0x76,0x90,0x83,0x27,0xE3,0x09,0xE7,0x77,0x0B,0x64,
			0x8F,0x02,0x16,0xD2,0x78,0x65,0x00,0xFE,0x10,0x73, /* 900 */

			0x91,0x74,0xF9,0x0F,0xFD,0x36,0x52,0x68,0x17,0x63,
			0xA9,0x60,0x3E,0x27,0x14,0xB5,0xD8,0x87,0x43,0x8D,
			0x11,0x6F,0x10,0x92,0xBB,0xE1,0x94,0x69,0xF5,0x83,
			0x0E,0x2E,0x10,0x3C,0xF0,0xD9,0x88,0xAA,0xFA,0x32,
			0xEF,0x9E,0xA0,0xB5,0x1F,0x1D,0xF4,0xF8,0x56,0x6B,
			0x8B,0x20,0xD4,0x44,0x45,0x46,0x05,0x83,0x34,0x19,
			0x87,0x2E,0x35,0x84,0xAC,0x89,0x23,0x7E,0x14,0x12,
			0xDC,0xD8,0xDA,0x9A,0x75,0x25,0x00,0xDD,0xF2,0xCE,
			0xA6,0xD3,0x50,0xFA,0xBE,0x0D,0xEC,0xDD,0xC2,0xCC,
			0x37,0xD2,0xBF,0x0B,0x5B,0xF4,0x43,0x49,0x9C,0x5D, /* 1000 */

			0xC7,0xA4,0x3D,0x3A,0xD5,0x6C,0xEA,0xEF,0x1B,0xD9,
			0xAF,0xD1,0x16,0xD2,0x4A,0xC9,0x29,0x42,0x1E,0x65,
			0x49,0xEF,0x85,0x73,0xA3,0x6A,0x3E,0xD9,0x57,0xD9,
			0x6A,0xB8,0x5A,0x6F,0xBE,0xE9,0x79,0xF0,0x3E,0xAF,
			0x10,0x9F,0x51,0x6E,0x39,0xD8,0xF5,0xD6,0x5B,0xB0,
			0xFF,0x30,0x99,0x1C,0x8B,0x53,0x65,0xEA,0xFD,0x46,
			0x5F,0xC6,0x4A,0x0C,0x5F,0x8F,0x3F,0x90,0x03,0x48,
			0x94,0x15,0x89,0x9D,0x59,0xA5,0x43,0xD8,0x20,0x8C,
			0x54,0xA3,0x16,0x65,0x29,0xB5,0x39,0x22),
		.ct = chunk_from_chars(
			0x17,0xF6,0x89,0x1A,0xF4,0xB3,0xF4,0xF2,0xDB,0x4B,
			0xB4,0x03,0x28,0x9E,0xFC,0x92,0x5A,0x81,0x97,0x7B,
			0x29,0x1C,0xD1,0xD8,0xFA,0x41,0x46,0x04,0xEB,0xF5,
			0x46,0xBC,0x57,0xEC,0xE5,0x33,0x49,0xDB,0xBA,0x5B,
			0x81,0x33,0xBB,0xA5,0x3C,0x94,0xD8,0xFE,0x37,0x14,
			0xFD,0xC5,0xE4,0xF4,0x45,0xAD,0xC6,0x8F,0xE2,0x8E,
			0x13,0x6E,0xAE,0x49,0x58,0xCB,0xCF,0x18,0x0E,0x45,
			0x6C,0x63,0x5E,0xEC,0xDA,0x82,0xDB,0x62,0x54,0x4A,
			0x1B,0xA0,0x85,0xAD,0x62,0x48,0xDB,0x55,0x19,0x20,
			0xE2,0x4A,0x20,0x21,0x1E,0xE2,0xE0,0xE2,0x0E,0x81, /* 100 */

			0xCF,0xE2,0x20,0xB7,0x4C,0x08,0xFF,0xCD,0xCB,0xD4,
			0xB7,0x8C,0x91,0xBC,0x50,0x18,0x87,0xCD,0xB7,0x02,
			0xE8,0xFA,0x95,0xD7,0x89,0x7E,0x07,0x24,0xCB,0xE3,
			0xF7,0x70,0x0A,0x10,0x6D,0x44,0x22,0xE8,0x0F,0xB5,
			0x15,0xA7,0x6B,0x23,0xC8,0x2C,0xFA,0xD6,0xFB,0xAC,
			0x49,0xA3,0xA2,0x32,0x26,0x52,0x28,0xD6,0x1A,0xB3,
			0x00,0xBF,0xDF,0x69,0xDE,0x9C,0xD9,0x61,0x12,0xB6,
			0xB8,0x7B,0xEC,0x57,0x54,0xD9,0x3C,0xB5,0x94,0x37,
			0x60,0xF9,0xAA,0x9F,0x96,0xE8,0xD5,0xBE,0xC7,0xD8,
			0xBE,0x32,0x46,0x66,0x41,0x81,0xF7,0x47,0x3D,0xDC, /* 200 */

			0x1E,0x24,0x13,0xB6,0x2B,0x09,0x0B,0x07,0x37,0x7B,
			0xB0,0x9E,0x36,0x8C,0x0C,0x49,0x20,0x32,0xF3,0xF4,
			0x96,0x5F,0x4B,0x30,0x98,0x1D,0x7D,0x6C,0x65,0x8A,
			0x71,0xAD,0x80,0x4E,0x89,0x05,0x50,0x3B,0x1C,0x5E,
			0xE1,0xC2,0x03,0xB3,0xFB,0x14,0x0F,0x35,0xA2,0xE8,
			0xFF,0xAD,0xA2,0x4E,0x56,0xA0,0xF5,0x01,0x3F,0xE2,
			0x37,0x67,0xE0,0x45,0x40,0xBA,0x16,0x59,0xFD,0x48,
			0xB9,0xE2,0x97,0xCD,0xDD,0x1F,0x81,0xB0,0x67,0x3E,
			0x0E,0x0B,0xFA,0x15,0xD1,0xC7,0x4F,0x4B,0x2C,0xDF,
			0x40,0x9F,0x7D,0x7B,0x53,0xE6,0xD0,0x8E,0xC3,0xDE, /* 300 */

			0x6E,0xB6,0xDF,0xAC,0xC5,0x76,0x7D,0xF6,0xEF,0x8B,
			0xFE,0xBF,0x24,0x38,0x31,0x2F,0x2F,0xAB,0x5A,0xE5,
			0x0F,0x65,0x8A,0xF6,0xD7,0x46,0xA4,0x68,0xDD,0xBE,
			0x57,0x34,0x35,0x92,0x34,0xF9,0xC9,0x47,0xC2,0x32,
			0xC6,0x66,0xE5,0x0E,0xA2,0xC0,0xCC,0xFC,0xFC,0x2B,
			0xF2,0x13,0xC7,0x28,0xB7,0x1E,0x32,0x73,0x08,0xF5,
			0x57,0x60,0xE0,0xEC,0x84,0x26,0xEC,0x20,0xA9,0xBE,
			0x74,0x2E,0xAB,0xFD,0x56,0xE4,0x09,0x28,0x7B,0x06,
			0x69,0xCF,0x0A,0xAA,0xE2,0x1A,0x3C,0x01,0x3C,0x41,
			0x7B,0x08,0xFC,0x51,0xD7,0x17,0xAA,0x3D,0x68,0x19, /* 400 */

			0x5B,0xD0,0xC6,0xD9,0x31,0x65,0xEC,0xF6,0x85,0x6F,
			0xAF,0xAD,0x97,0x13,0x39,0x40,0x29,0x0D,0x72,0x9E,
			0x47,0x50,0x47,0x9D,0xEE,0x57,0x98,0x9D,0x13,0x26,
			0x2F,0xE6,0x79,0xE9,0x4B,0x8F,0x95,0xC1,0x93,0xB7,
			0x78,0x68,0x9E,0x5D,0x7E,0x47,0x48,0xE7,0xD3,0x52,
			0xB7,0xCD,0xBE,0xA5,0xE1,0x37,0x56,0xD1,0x28,0x64,
			0x44,0xC8,0x3C,0x54,0x5D,0xFE,0x02,0x02,0xE5,0x7D,
			0xBD,0x27,0x98,0xE9,0xAF,0xAB,0x46,0x54,0xA0,0x95,
			0x1B,0xE4,0x35,0xA0,0xD7,0x5B,0xBC,0x2E,0x02,0xB7,
			0xCE,0xA7,0x9D,0xD3,0x9E,0x3A,0xF9,0xA7,0x99,0x2E, /* 500 */

			0xA2,0xA4,0x93,0xA2,0xCF,0xF1,0xE7,0x5E,0x3A,0x14,
			0x49,0x26,0x58,0xC0,0xDD,0x0B,0x5B,0xBD,0xF2,0x86,
			0xDB,0x9E,0x08,0x92,0xEC,0x22,0x91,0x1F,0xC9,0x60,
			0xC8,0x3E,0x38,0xA2,0x56,0x67,0x7C,0xE6,0xDF,0xA7,
			0x8A,0x10,0xF3,0x16,0xF2,0xC1,0x10,0x1F,0x61,0x50,
			0x42,0xBB,0x15,0x30,0x68,0xA2,0x5C,0x90,0x5C,0xBC,
			0x19,0x13,0x1D,0x72,0xAB,0x02,0x81,0xDA,0x7E,0x17,
			0x66,0xB7,0x7A,0x91,0xB0,0xA0,0x1D,0xE3,0x05,0xA1,
			0x5D,0x43,0x39,0x63,0xB1,0x2B,0x6B,0x0E,0x29,0xAE,
			0x93,0x3D,0x30,0x66,0x4E,0x52,0x4F,0xBF,0xB2,0x15, /* 600 */

			0x5A,0xC4,0x38,0x00,0xA6,0x9A,0x49,0xBB,0x84,0x51,
			0xFE,0xCD,0xF2,0x08,0xCE,0xD2,0x0A,0x57,0xCA,0x5E,
			0x9E,0x35,0x8E,0xCF,0x76,0x5D,0x9F,0x39,0x6D,0x11,
			0x60,0x83,0x72,0x64,0x39,0x42,0x4A,0xDD,0x44,0xCB,
			0xF4,0x78,0x2D,0x8A,0x77,0x6E,0xF2,0x92,0x79,0xD9,
			0xCE,0x04,0x85,0x49,0x24,0xD0,0x10,0xEF,0x0E,0xEF,
			0xC2,0x53,0x4B,0xD8,0xBE,0x48,0x53,0x15,0x94,0xA6,
			0x11,0x40,0x86,0xD9,0xBD,0xB8,0xDE,0x7F,0x9E,0xCF,
			0x2C,0x27,0xE7,0xFA,0x7C,0x87,0x43,0xEC,0xCD,0x9A,
			0xB7,0xB7,0x92,0x3D,0x96,0x18,0x2C,0x93,0x0C,0x7E, /* 700 */

			0x81,0x1B,0xC0,0xB8,0xA9,0xB4,0x3D,0x15,0x40,0x73,
			0x9A,0x20,0xAB,0x8B,0x37,0xA8,0x72,0x6E,0xF9,0xE6,
			0x9F,0x37,0xA7,0x3A,0xA4,0xB5,0x0B,0xF8,0x8E,0xF0,
			0xD1,0x2E,0x47,0xC1,0xAE,0x78,0x7A,0x95,0x1C,0x5E,
			0xA8,0xCA,0x3A,0xA7,0x10,0x03,0xB7,0xC4,0x90,0x9F,
			0x3D,0x9C,0x6B,0xA2,0x56,0x8F,0xA6,0xCB,0x41,0x9E,
			0x90,0x9D,0x74,0x72,0x08,0xC6,0x80,0xB3,0xE7,0x9D,
			0xA9,0x31,0x69,0xA6,0x73,0x92,0xF0,0x25,0x3A,0x3C,
			0xBB,0x01,0xFA,0x72,0x63,0xF3,0x9F,0x7D,0xC6,0x62,
			0xEE,0x38,0x8F,0x3D,0x55,0x8A,0x4A,0xF3,0x41,0x83, /* 800 */

			0x53,0x25,0x81,0x64,0x9F,0x04,0x30,0x5F,0xE0,0xE6,
			0x12,0x0A,0x46,0xCC,0xF3,0x29,0x4F,0xED,0x35,0xE3,
			0xA8,0xB0,0xB7,0x60,0xD7,0x1D,0x1E,0xE5,0xB2,0x7D,
			0x15,0x42,0x53,0x31,0x15,0x85,0x80,0x82,0xB8,0xBB,
			0x2F,0x65,0xA3,0x5A,0xC2,0x8E,0x89,0xA3,0x88,0x33,
			0x83,0xAB,0x96,0x07,0xFF,0xB3,0xC9,0x4D,0x75,0xB6,
			0x3E,0x23,0xFF,0x07,0xF3,0x39,0x3E,0xC2,0x11,0x4F,
			0x82,0x53,0xC7,0x54,0xBC,0x65,0x7E,0xFA,0x92,0xE5,
			0xCA,0x25,0x99,0x6A,0x41,0x6B,0xF6,0xA6,0xA8,0x6A,
			0x3F,0xE5,0x85,0xE7,0xB0,0x51,0x04,0x6E,0x54,0x41, /* 900 */

			0x6D,0x27,0x85,0xFD,0x32,0xF3,0x62,0xDD,0x5A,0xCC,
			0x27,0x18,0x66,0xC6,0x6E,0x8C,0x2D,0x32,0x01,0xB0,
			0x3A,0x64,0x27,0x2F,0x13,0x9D,0xED,0xE7,0x11,0xE7,
			0x21,0x64,0x02,0xB0,0x9C,0xBD,0x79,0x73,0x70,0xFD,
			0x15,0xD8,0xE4,0x99,0x67,0x57,0x69,0x8C,0xA1,0x55,
			0x2D,0xE5,0xC4,0xEC,0xE5,0x8B,0x07,0xB4,0x7E,0x6E,
			0x80,0x21,0xC0,0x74,0xDD,0xF2,0xA1,0xCA,0x5A,0xF6,
			0x05,0x01,0xE5,0x70,0xFB,0xB4,0xC3,0xFD,0x49,0xFC,
			0xFB,0x2C,0xED,0xB8,0x60,0xE2,0x3A,0x44,0x08,0x0A,
			0x62,0x26,0x3D,0x14,0x48,0x96,0xA4,0x6F,0xB6,0x9C, /* 1000 */

			0x67,0x64,0x5E,0x78,0x89,0xAF,0xAD,0x99,0xEB,0x0D,
			0x94,0x71,0x61,0xB4,0x30,0xB3,0x61,0xC3,0xB0,0x30,
			0xFE,0xF1,0x0C,0xA2,0xFF,0xFE,0x2E,0xA8,0x37,0xAE,
			0xFE,0xAD,0x39,0xD1,0x47,0xCD,0x39,0xCA,0x57,0x7A,
			0x57,0xD6,0xD4,0xD3,0x70,0x97,0x7B,0x76,0x00,0x97,
			0x0A,0xC5,0xCC,0x2E,0xBD,0xB7,0x03,0xBB,0xFD,0x94,
			0x08,0xF1,0x3F,0xF0,0x6F,0xC8,0x84,0xD3,0x71,0x13,
			0xDD,0xF0,0x01,0x52,0x64,0x2C,0x39,0x7F,0xA8,0x5A,
			0x7C,0x14,0x97,0xBE,0x88,0x67,0xF6,0x3E,0x7F,0xA3,
			0x30,0xDF,0x2C,0x9A,0xCD,0x0C,0x9F,0x85,0xAD,0xA4, /* 1100 */

			0xAA,0x2F,0xE5,0x12,0x66,0xBA,0x8F,0xEA,0x4D,0xF6,
			0x11,0x6E,0xD9,0xC0,0xB2,0x89,0xF8,0xC6,0xBE,0xCC,
			0xFE,0x26,0x81,0xF7,0x24,0xF2,0xA0,0x3B,0x76,0x80,
			0x0E,0x18,0x0C,0x73,0x01,0x81,0x4F,0xD5,0xD7,0x9E,
			0xD7,0x3A,0xBB,0x76,0x7C,0xC4,0x39,0x7F,0x00,0x2F,
			0x5C,0x9D),
		.ss = chunk_from_chars(
			0xB1,0x35,0xB0,0x98,0xC8,0xEB,0xEA,0x0A,0x3E,0xC5,
			0x50,0x85,0x7D,0xF4,0x34,0x49,0x37,0x21,0xDD,0xC5,
			0x44,0xD3,0xDE,0xA9,0xCD,0x3E,0x6A,0x58,0x46,0xF2,
			0x82,0xEF),
	},
	{
		.mechanism = QSKE_KYBER_L3,
		.count = 1,
		.seed = chunk_from_chars(
			0xD8,0x1C,0x4D,0x8D,0x73,0x4F,0xCB,0xFB,0xEA,0xDE,
			0x3D,0x3F,0x8A,0x03,0x9F,0xAA,0x2A,0x2C,0x99,0x57,
			0xE8,0x35,0xAD,0x55,0xB2,0x2E,0x75,0xBF,0x57,0xBB,
			0x55,0x6A,0xC8,0x1A,0xDD,0xE6,0xAE,0xEB,0x4A,0x5A,
			0x87,0x5C,0x3B,0xFC,0xAD,0xFA,0x95,0x8F),
		.pk = chunk_from_chars(
			0x09,0xC6,0x18,0xA8,0xF3,0x80,0x38,0x86,0x1C,0xF5,
			0x25,0xC5,0x90,0x23,0x64,0x68,0x87,0x7B,0xEA,0x5C,
			0xF9,0x35,0x1E,0x19,0x65,0x13,0x96,0x44,0xE9,0x17,
			0xC3,0xC9,0x6E,0x94,0x3B,0x80,0x52,0x79,0xCB,0xCE,
			0xAB,0x89,0xD5,0x05,0x28,0x60,0x66,0x5B,0x61,0x5E,
			0x1D,0x4E,0x30,0x9C,0xA4,0xE3,0x84,0x0E,0x8D,0x61,
			0x47,0xC1,0x68,0x50,0x3A,0x1B,0x09,0x0E,0x77,0x25,
			0xB8,0xAC,0xA8,0xDB,0x70,0xC9,0x78,0xCB,0xF8,0x25,
			0x78,0x17,0xF1,0x1A,0xB9,0x1D,0x89,0xCB,0xAC,0xCC,
			0x4F,0x68,0xE0,0xE0,0x1B,0x3F,0x79,0x8B,0x75,0xE8, /* 100 */

			0x48,0x83,0xAC,0xAD,0x04,0x71,0x52,0x14,0x03,0x6D,
			0xFF,0xCD,0xB0,0x1B,0x22,0x8F,0x24,0xC5,0x68,0x59,
			0x6A,0x0F,0x82,0xD1,0x9E,0x78,0x42,0xC2,0xEF,0x39,
			0x42,0xD4,0x3B,0x94,0x0B,0xE9,0x01,0xF9,0xB5,0xED,
			0x91,0xF7,0xE7,0x98,0x5E,0x89,0x5C,0x36,0xC5,0x5D,
			0x3D,0xAF,0xA0,0x8F,0xB8,0x77,0x90,0x69,0x1F,0xF3,
			0xA4,0xD3,0xB8,0x69,0x41,0xCF,0x20,0xA5,0xF6,0x01,
			0x54,0x10,0x9A,0x3B,0x15,0x9D,0x8B,0x6B,0xBA,0x7E,
			0x07,0xE4,0x99,0x5B,0xCC,0xFD,0xF6,0xE0,0x20,0x30,
			0xF8,0xD8,0x4A,0xF5,0xAF,0x9E,0xBD,0x96,0x3C,0x1B, /* 200 */

			0x87,0x72,0x2F,0xB6,0x6F,0x09,0xCD,0xF5,0x8B,0x44,
			0x66,0xE4,0xC2,0x9E,0x89,0x4E,0x11,0x60,0x27,0xD4,
			0x1A,0xD2,0x90,0x8B,0x91,0xCB,0xD2,0xF0,0x4E,0x6A,
			0x0C,0x79,0x50,0x03,0x0F,0xB2,0x66,0x19,0x51,0xCF,
			0x19,0x47,0x11,0xC5,0x4C,0xFA,0xFB,0x5A,0x2F,0xAD,
			0x3E,0x1F,0x5D,0x82,0x84,0xAB,0x6B,0x37,0xDF,0xB3,
			0xE7,0xDA,0xB5,0xC6,0xB8,0xE9,0xE0,0x17,0x06,0x61,
			0xD2,0x2E,0x65,0xF8,0xFA,0x0F,0x13,0x6C,0x68,0x39,
			0x8C,0x5F,0x01,0x84,0x76,0x8B,0x1E,0xCA,0x0B,0xF2,
			0x04,0xA2,0xAC,0xF4,0xDD,0xF9,0x44,0x03,0xA4,0xE4, /* 300 */

			0xF7,0x87,0x8C,0x6C,0x62,0x33,0x2A,0x11,0x36,0x6E,
			0x88,0x0F,0xD7,0x55,0x11,0xAC,0x3F,0x2F,0xDD,0x0F,
			0xAF,0xB5,0xC6,0xD5,0x8A,0xF9,0x41,0x83,0xD3,0x01,
			0x62,0x7D,0x90,0xF9,0x74,0x3E,0x06,0xDE,0x14,0xDE,
			0x9E,0x7B,0x55,0x42,0x01,0x63,0x27,0xD0,0x59,0x29,
			0xA7,0xDF,0x10,0x58,0xF9,0x6B,0x72,0xE6,0x7D,0x00,
			0x34,0x6B,0x3A,0x6D,0xCF,0x77,0xF3,0xA0,0x29,0x94,
			0x19,0xB6,0x40,0xAF,0x28,0x22,0xA9,0xE2,0x95,0xA1,
			0xE2,0x2F,0x6C,0x14,0xBA,0x6C,0x55,0xD2,0x20,0x69,
			0xF3,0xC6,0xB2,0xC3,0x10,0x6F,0x96,0xBE,0xCA,0x1D, /* 400 */

			0x62,0x24,0xE3,0x93,0x05,0x66,0x66,0xD8,0xA0,0x1B,
			0x46,0x22,0x3D,0xC0,0x4E,0x71,0x46,0xD9,0x3D,0x3B,
			0x1C,0xF1,0xA5,0x31,0x70,0x3D,0x56,0x4D,0x3E,0xEE,
			0x81,0x77,0xCC,0x3C,0xE3,0xB4,0x15,0x92,0xB4,0xD7,
			0xDB,0xDF,0xEF,0x32,0x1B,0xFA,0xC0,0xFF,0xE9,0xF2,
			0x00,0xCC,0xA6,0x39,0x3A,0xBD,0xFC,0x89,0x95,0x4F,
			0xB1,0xE8,0x02,0x76,0xC8,0x9B,0x98,0x90,0xA2,0xFC,
			0x8A,0xAB,0x11,0x06,0x9C,0x46,0x56,0x0C,0x5F,0x72,
			0x5B,0x8F,0x4A,0x72,0xFB,0xAC,0x08,0x57,0x6C,0x14,
			0x7A,0x3F,0xE6,0x32,0x69,0x6A,0x00,0x80,0x4F,0xB2, /* 500 */

			0x4A,0x60,0xDD,0xD6,0x9D,0x93,0xAA,0x4B,0xF1,0x95,
			0x63,0x0F,0x14,0xDD,0xAB,0x8A,0xC7,0x1A,0x8B,0xA2,
			0x9D,0x4C,0x23,0x15,0xF2,0x0F,0xCF,0x92,0x8C,0x0D,
			0x66,0x7F,0x48,0x47,0x49,0xD9,0x68,0xE6,0xA8,0x4F,
			0x32,0xCE,0x45,0x19,0x52,0x4E,0xF4,0x31,0xF9,0x58,
			0xD9,0x49,0xCA,0x30,0x4C,0x41,0xF2,0x19,0xED,0xEA,
			0x13,0xCA,0xA5,0x11,0xCE,0x11,0x2C,0xD3,0x3F,0x30,
			0x59,0xB9,0xE6,0xCE,0xE0,0xDA,0xF1,0xFE,0x62,0xE8,
			0xF6,0xB2,0xEE,0x05,0xBE,0xE8,0x59,0xE6,0x71,0xEA,
			0x01,0x8E,0x28,0x92,0xAE,0x00,0x00,0x62,0xAB,0x74, /* 600 */

			0x8C,0xE0,0xBE,0x7F,0xCB,0x52,0xAD,0xA6,0x46,0x12,
			0x1B,0xF4,0x3A,0x09,0x6C,0xD1,0x26,0x74,0x6E,0xF7,
			0x55,0x07,0x84,0xF4,0x22,0xF6,0x65,0x73,0xD0,0xE0,
			0xD4,0x47,0x0B,0xF3,0x8A,0x2B,0x35,0x79,0x2A,0xB7,
			0x13,0x48,0x07,0x7E,0x16,0xEE,0x4B,0xC6,0x4A,0x23,
			0xE9,0xE6,0x4B,0xC7,0x20,0x51,0xDD,0x72,0x57,0x19,
			0xE4,0x4A,0xE2,0xA6,0x59,0x63,0x7A,0xFC,0x65,0xD8,
			0x08,0x52,0x20,0x35,0x4E,0x9C,0x67,0x8D,0x6D,0x6C,
			0x27,0x9A,0x68,0x96,0xF2,0xB9,0x83,0xC2,0x95,0xFF,
			0xD7,0xD8,0xAC,0x19,0x5E,0xFA,0x7B,0x18,0xC3,0x49, /* 700 */

			0x0C,0x61,0x35,0x7C,0xEA,0x07,0x95,0x26,0x01,0x19,
			0xDF,0xE5,0x0C,0x8C,0x63,0x2F,0xCC,0xC4,0x7F,0xAF,
			0x86,0x3C,0xB1,0x42,0x88,0xB2,0x11,0x45,0x19,0x1A,
			0xD7,0xBE,0x31,0xAC,0xBE,0xAF,0x92,0x83,0x15,0x29,
			0x91,0x1B,0x28,0x54,0xC8,0xF9,0x0B,0x70,0xBB,0xDB,
			0x08,0x37,0xA1,0x87,0xFC,0xE4,0x55,0xCE,0xDA,0xDE,
			0xE1,0x47,0x0A,0x52,0xD0,0x70,0x7F,0x06,0x2E,0x06,
			0x98,0x0E,0x5F,0x7E,0xD7,0x34,0x72,0x34,0xFD,0x64,
			0xED,0xED,0xCD,0xA6,0x38,0x6C,0x07,0xE5,0x18,0x47,
			0x4B,0xCF,0x2D,0x55,0xFE,0x76,0x7D,0x40,0xD4,0x74, /* 800 */

			0xBA,0x9D,0x5B,0x6F,0x5B,0x09,0xDF,0x0E,0x01,0x67,
			0x20,0x0B,0x76,0x4A,0x5B,0x0D,0xE5,0x8A,0x13,0x88,
			0x54,0x1B,0x9D,0x67,0x7F,0x0B,0x4A,0x1F,0x4B,0xFF,
			0x8F,0x37,0x9C,0x3E,0x2C,0x47,0xE9,0x4A,0xD1,0x71,
			0xF6,0x29,0x06,0x4B,0xD4,0xC4,0x47,0x96,0x1A,0x73,
			0xE2,0xD9,0x51,0x71,0xA2,0x1F,0xEE,0x3E,0xA0,0x5D,
			0xFA,0x8E,0x34,0x7F,0xC1,0xAD,0xAC,0x2C,0xAF,0xA2,
			0xBB,0x7B,0xA8,0x60,0x97,0x75,0x1C,0xC6,0xDD,0xA7,
			0xB9,0xDB,0x87,0xFE,0x33,0x2E,0xB2,0xAA,0xD4,0xA2,
			0x89,0x43,0x50,0xE1,0xC0,0xD8,0xE8,0x72,0x28,0xE3, /* 900 */

			0x9B,0x5C,0x1D,0x08,0xB3,0xA8,0x1C,0x46,0xB3,0x29,
			0x46,0x8F,0xC8,0x12,0x3A,0x63,0x42,0x5F,0x1D,0x4E,
			0x26,0x6D,0x00,0xC0,0x64,0xB8,0x3B,0x18,0x1B,0x86,
			0x77,0xA0,0xAE,0xA5,0x9C,0xD7,0xB7,0x48,0xAE,0xEF,
			0xA2,0x01,0xE9,0xDF,0x49,0xDA,0x4C,0x0C,0x3A,0x4D,
			0x6C,0x0F,0x07,0x6F,0x21,0xD4,0x42,0x06,0xB7,0xD3,
			0x28,0x8A,0x5B,0x31,0x07,0xC9,0x27,0x84,0x45,0x1F,
			0x6A,0x7F,0x57,0x5A,0x31,0x7A,0xED,0x0F,0x8B,0x87,
			0xFE,0xE4,0x13,0x0E,0xA2,0x52,0xEA,0xAD,0x88,0xD0,
			0x0D,0x07,0x86,0x1F,0x5F,0x08,0x82,0x1F,0x65,0xA1, /* 1000 */

			0xB0,0x09,0xF1,0xE7,0xB5,0x95,0x98,0x51,0x68,0xD2,
			0xFA,0xCC,0x47,0x65,0x9D,0x69,0xA4,0xFB,0x2C,0x68,
			0xC2,0xFF,0x25,0x3B,0x5C,0x5C,0xE3,0x65,0xE2,0xB0,
			0xF0,0xEB,0xDC,0xF9,0xB9,0x09,0x6F,0x7B,0x5F,0x6F,
			0xF5,0x38,0x6D,0x6D,0x92,0xB7,0x8D,0xC7,0x2F,0x20,
			0xCE,0x97,0xD6,0x46,0xB0,0x54,0x96,0xF1,0x3F,0x56,
			0xBE,0x78,0x5D,0x94,0x2D,0x7E,0xAB,0x01,0x18,0x05,
			0xCF,0x35,0x04,0xFC,0xE3,0x25,0xB6,0xA5,0xEF,0x1A,
			0xAA,0xDB,0xBB,0x11,0xC6,0x62,0xB9,0xD2),
		.ct = chunk_from_chars(
			0x28,0x32,0x0B,0xE8,0x53,0x8F,0x83,0x75,0x95,0xFB,
			0x9B,0x9D,0x09,0xBC,0x80,0x10,0x51,0x0B,0xD4,0x2E,
			0x65,0x5E,0x61,0x0E,0x20,0xA3,0x96,0x47,0x9A,0x9A,
			0x6C,0xCD,0x7F,0x2D,0xAD,0xD9,0xC3,0x5F,0x5F,0xD6,
			0x61,0x90,0x98,0xA4,0x9C,0x72,0xAE,0xA5,0x91,0x5B,
			0x52,0xD0,0x21,0xB4,0x7D,0xD0,0x5A,0x95,0x18,0x8C,
			0x5A,0xFB,0xA0,0x90,0x69,0xA3,0x46,0x40,0xCB,0x3A,
			0xC1,0x85,0xAD,0x16,0x22,0x3C,0x28,0xD1,0x52,0x7D,
			0xAB,0xE2,0x1C,0x5C,0x8B,0x7C,0x15,0x80,0xDD,0x2C,
			0x7C,0x4F,0x87,0xC4,0xBF,0x9A,0xE8,0x12,0x16,0xFB, /* 100 */

			0x73,0x7C,0x7B,0x96,0x9F,0x4B,0x98,0x96,0x21,0x79,
			0x4A,0x63,0xED,0xD0,0xEB,0x54,0xA6,0x31,0x3B,0x81,
			0x43,0xB9,0xEA,0x9F,0x41,0x27,0x58,0x25,0xBD,0xAC,
			0xB2,0xA1,0xF5,0x4D,0xBB,0xF9,0x4D,0xDA,0x45,0x87,
			0x44,0x68,0x94,0x36,0xC5,0x5D,0x39,0x9E,0xB1,0xC8,
			0xAB,0x69,0x30,0xF6,0xFB,0xFC,0x84,0xF9,0xB5,0x81,
			0x72,0x99,0xB4,0x43,0x37,0x07,0x8F,0x1B,0x0B,0x18,
			0xFC,0xBF,0x5C,0x26,0x74,0x6E,0x53,0xA9,0xB7,0xD7,
			0xD5,0x5C,0x1E,0xC4,0x64,0x13,0x8A,0xEF,0x91,0x73,
			0xCF,0xB8,0xB7,0x4A,0xDA,0x15,0xF5,0x51,0x95,0x9B, /* 200 */

			0x54,0x9A,0x21,0x60,0x5D,0xCA,0x7C,0x3B,0x66,0xAA,
			0x45,0x19,0xA9,0xC8,0x6B,0x59,0xC3,0xB8,0x3B,0xEE,
			0x6A,0x19,0x38,0x4C,0x43,0x12,0xDA,0x41,0xD5,0xBE,
			0x4D,0xC9,0x16,0xFE,0x6E,0x3B,0xDB,0x47,0x6E,0xBB,
			0xF6,0x30,0xF1,0x95,0xC2,0xE0,0x42,0x96,0x43,0x09,
			0xAE,0x45,0x43,0xB9,0xEC,0x36,0x97,0x10,0x49,0x81,
			0xB7,0x5C,0x37,0x12,0x33,0x39,0x4A,0x22,0xBC,0x50,
			0x67,0xAD,0xC6,0x9F,0x4D,0x22,0x47,0xC0,0x9E,0x00,
			0xEC,0xAE,0xBF,0x3B,0xEA,0x4A,0xDD,0x45,0x5B,0x98,
			0x35,0x87,0xE2,0x95,0x58,0x44,0x0A,0x13,0xF0,0x44, /* 300 */

			0x84,0xA8,0xDD,0x47,0xBF,0x75,0x62,0x72,0xFB,0x33,
			0x82,0x61,0x51,0x1A,0x37,0x34,0xE8,0xE9,0x1E,0xA0,
			0x1B,0xC9,0x86,0xFA,0xA2,0x25,0x9F,0x01,0x2E,0x93,
			0xB6,0xC7,0xEF,0xF6,0xB6,0xE3,0xE5,0xB1,0xCA,0xAA,
			0xDA,0xEC,0x9C,0xD2,0x66,0x9A,0xA4,0xEC,0x1D,0x54,
			0xE7,0x31,0xC1,0x6D,0xB8,0xA0,0x39,0xA3,0x9B,0xA0,
			0x7B,0x11,0xA5,0x6A,0x74,0x89,0x5A,0x0E,0x6D,0x90,
			0xF1,0x8A,0x22,0x0B,0xF3,0xE9,0x49,0x4D,0x2D,0x4B,
			0xB6,0x77,0x37,0x71,0x1F,0x34,0xE1,0x62,0xE2,0x36,
			0x2C,0xDE,0xBB,0x7D,0xA1,0x5E,0x21,0xF3,0x32,0x5E, /* 400 */

			0x26,0x83,0x3B,0x54,0xDB,0x89,0x2D,0xCB,0x40,0x96,
			0xD4,0xA2,0xB9,0xFA,0x11,0xB0,0xDC,0xF3,0x6A,0xD6,
			0xBA,0xF4,0x41,0xDC,0xB2,0xA9,0xAB,0x8D,0x67,0x45,
			0x36,0xCB,0x17,0x0B,0x38,0xD5,0xE6,0xF2,0x14,0x68,
			0x47,0xAD,0x74,0x44,0x36,0x67,0x75,0xDF,0xB9,0x57,
			0x33,0x6F,0x05,0xD3,0x25,0x6F,0xA2,0x51,0xC0,0x9D,
			0x78,0x1B,0x18,0x61,0xB1,0xA1,0xF0,0xE0,0x49,0x40,
			0xB5,0xD4,0x92,0x24,0x69,0x89,0x18,0x2B,0xDA,0x44,
			0xE1,0xA7,0xF2,0x2C,0x45,0xF3,0xC2,0x03,0x13,0xB4,
			0x5A,0x5F,0x03,0x0A,0xA1,0xF5,0x97,0x15,0x05,0x00, /* 500 */

			0x7A,0x83,0x08,0x64,0x2D,0xC8,0x63,0x11,0xF4,0xD6,
			0x22,0xEE,0x0D,0x92,0x53,0xEC,0xAC,0x18,0xAA,0x93,
			0x91,0xC2,0x1B,0xB1,0x44,0xC4,0x02,0x01,0x1B,0xE2,
			0x6C,0xB9,0xB7,0x64,0xC1,0x58,0xE3,0x51,0x07,0xB9,
			0x01,0x48,0x3D,0xB7,0xB7,0xF6,0xAA,0x4E,0x91,0x37,
			0x7F,0xFC,0xC4,0x0A,0x75,0xA4,0xAD,0x94,0x81,0x65,
			0x39,0x31,0x93,0xC2,0x7C,0x37,0xF5,0x59,0x41,0xAE,
			0x52,0x0E,0x27,0xC7,0x3C,0x02,0x44,0xFE,0x5B,0x9F,
			0x61,0x02,0xC4,0x50,0x54,0x08,0xFD,0x5F,0x5C,0x81,
			0x50,0xEA,0x92,0x48,0x53,0x77,0x76,0x37,0x4A,0xF6, /* 600 */

			0x4A,0x45,0x45,0x10,0x63,0x3C,0xD1,0x27,0x14,0x56,
			0x94,0xB6,0x67,0x12,0x0E,0x5B,0x0C,0xA4,0x39,0x0E,
			0x20,0x7C,0x04,0x61,0x57,0xB0,0x6E,0x3B,0x2F,0xAC,
			0xF2,0x55,0xA7,0x94,0x35,0x6D,0xE8,0xFD,0x04,0x86,
			0xE3,0x6C,0xB0,0xEF,0x37,0x33,0x41,0x10,0x4C,0x23,
			0xE6,0x0F,0x45,0x4C,0x6E,0x6F,0x9C,0x00,0x67,0x96,
			0xD2,0x64,0x64,0x2C,0xD3,0x5E,0x86,0x85,0xD5,0x4D,
			0xB4,0xA0,0xC3,0x9B,0xDF,0x35,0x3D,0x5D,0xFC,0x73,
			0xE9,0x4B,0x93,0x47,0x15,0x15,0xA5,0xD4,0x4C,0xD6,
			0x36,0xAB,0xCC,0x47,0xB5,0x62,0xD5,0xC7,0xC6,0x28, /* 700 */

			0x99,0xFC,0x2A,0xC7,0xD9,0x90,0xD0,0x54,0x69,0x76,
			0x9F,0x33,0x68,0x0D,0xAC,0xF1,0x6D,0xBC,0xD8,0x72,
			0x52,0x5D,0xAD,0x03,0xCA,0xA9,0xE0,0x9E,0xDF,0x77,
			0x44,0x2F,0x16,0x80,0x12,0x07,0x1F,0xE1,0xA1,0x26,
			0x8D,0x43,0xCF,0x83,0x28,0xF2,0x96,0x25,0x8D,0x45,
			0x9E,0xA0,0x19,0xA9,0xC9,0xB9,0x1B,0x7E,0xF6,0xD6,
			0x4D,0x83,0x92,0x2A,0x89,0xD2,0x4A,0xD4,0x8B,0x61,
			0x52,0xF1,0x6D,0xC2,0xE6,0x88,0x83,0x68,0xDB,0x43,
			0x65,0x8A,0x0A,0xC3,0x1A,0x15,0x23,0x2A,0x56,0x1B,
			0x4A,0x34,0x24,0xD7,0xE1,0x4C,0xD1,0x89,0x71,0xE2, /* 800 */

			0xD6,0x81,0xB2,0xC2,0x66,0x3F,0xA9,0xED,0xCC,0xB0,
			0xCB,0xA4,0xDB,0x45,0xC3,0x2F,0xC8,0x19,0xEB,0x4F,
			0xDB,0x07,0x77,0xB0,0xF3,0xAB,0xD8,0xA2,0x00,0xC8,
			0x1F,0xE4,0x17,0x39,0x65,0x40,0x57,0x69,0x48,0x52,
			0xC3,0x68,0xEF,0x61,0xC8,0x4C,0xB9,0xF4,0x92,0x32,
			0x0B,0xFC,0xB5,0x12,0x34,0x8F,0x45,0x60,0x73,0x01,
			0xFF,0x83,0xC2,0x66,0x6B,0xB5,0x92,0x97,0x5F,0x5E,
			0xD7,0x52,0x03,0x1C,0xCD,0x1D,0xDB,0xF7,0xAE,0xAB,
			0x52,0x81,0x21,0x53,0x2D,0xC1,0xC7,0x5E,0x39,0x01,
			0x21,0x91,0x89,0x44,0xF4,0x68,0x67,0xF4,0x98,0xA2, /* 900 */

			0x26,0xEA,0xA8,0xBD,0xF3,0xF1,0x89,0xA8,0x47,0xB2,
			0x78,0x1B,0x71,0x60,0xDF,0xDE,0xBE,0x58,0xD8,0xD4,
			0x94,0xFB,0xE8,0x2E,0x55,0x9B,0x23,0x9D,0x10,0xC2,
			0x16,0x57,0xDC,0x84,0x57,0x49,0x9B,0xDA,0x11,0xA1,
			0x04,0x06,0x93,0xB9,0xFE,0x9D,0xA3,0x07,0x48,0xCF,
			0x35,0x69,0x54,0xAE,0x0F,0xEC,0xC0,0x0E,0x6D,0x3C,
			0xBA,0x68,0x47,0x1D,0xD5,0x6E,0x28,0x38,0x6F,0x16,
			0xBD,0x97,0xC0,0x4D,0xC8,0x8C,0xD3,0x1D,0xED,0xF9,
			0x63,0xB5,0x30,0xAA,0xC8,0xFB,0xB5,0x89,0x14,0x93,
			0xE5,0x75,0xA9,0x7B,0xCC,0xF2,0xF7,0x64,0xAC,0x2E, /* 1000 */

			0x76,0x80,0xFE,0xE7,0x95,0xDD,0xD3,0xE8,0x48,0xF8,
			0xDE,0xD0,0x00,0x08,0x40,0x21,0xD7,0x96,0x2A,0x36,
			0x03,0x12,0x6B,0xDB,0x0B,0x6F,0x33,0x08,0x29,0x3E,
			0x68,0xE5,0x1D,0xE8,0x5A,0x6C,0xDC,0x35,0xB1,0x53,
			0x88,0x45,0x85,0xD2,0xA2,0x66,0x8F,0x5F,0xD9,0x97,
			0x8E,0x11,0x96,0x8F,0xE3,0xE8,0xB7,0xD2,0x1B,0x6A,
			0xA7,0x7D,0x4A,0x43,0x0D,0x6B,0x24,0x13,0xDC,0x3C,
			0x51,0x7F,0xD4,0x95,0x8B,0xA8,0x58,0x83,0x96,0x04,
			0xC0,0x75,0x36,0x45,0xEE,0x47,0x42,0x08,0xEE,0xB2,
			0x95,0x57,0x6D,0xB2,0x5A,0x04,0xAB,0x0B,0x5A,0xFF, /* 1100 */

			0x53,0x55,0x3F,0x69,0xA5,0x0E,0x65,0xE3,0x82,0x35,
			0xE7,0x68,0xAD,0xB1,0xB8,0x59,0xC4,0x2A,0x9A,0x21,
			0x3C,0x1B,0x9A,0xBE,0xD2,0x4E,0xDA,0x53,0xDE,0xCE,
			0xBC,0x39,0x66,0x44,0xC7,0x27,0x36,0xC9,0x40,0x8A,
			0x02,0x6E,0xD7,0xD7,0x69,0x36,0x7B,0xCE,0x6D,0xA7,
			0x91,0xB4),
		.ss = chunk_from_chars(
			0xE2,0x7C,0xE6,0x1C,0xB0,0xB5,0xAA,0xA9,0xCB,0x1A,
			0xEC,0x40,0x1A,0x2C,0xE5,0xA4,0xBB,0x0E,0x45,0xAB,
			0xE3,0x30,0x21,0x38,0x3C,0x05,0x66,0x3E,0x6E,0x44,
			0xCC,0x3D),
	},

