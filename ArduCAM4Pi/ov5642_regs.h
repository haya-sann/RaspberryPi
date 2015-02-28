#ifndef OV5642_REGS_H
#define OV5642_REGS_H
#include "PiCAM.h"

#define OV5642_CHIPID_HIGH 0x300a
#define OV5642_CHIPID_LOW 0x300b

const struct sensor_reg OV5642_VGA_preview_setting[] PROGMEM  = 
{

	{0x3103 ,0x93},
	{0x3008 ,0x82},
	{0x3017 ,0x7f},
	{0x3018 ,0xfc},
	{0x3810 ,0xc2},
	{0x3615 ,0xf0},
	{0x3000 ,0x00},
	{0x3001 ,0x00},
	{0x3002 ,0x5c},
	{0x3003 ,0x00},
	{0x3004 ,0xff},
	{0x3005 ,0xff},
	{0x3006 ,0x43},
	{0x3007 ,0x37},
	{0x3011 ,0x08},
	{0x3010 ,0x10},
	{0x460c ,0x22},
	{0x3815 ,0x04},
	{0x370c ,0xa0},
	{0x3602 ,0xfc},
	{0x3612 ,0xff},
	{0x3634 ,0xc0},
	{0x3613 ,0x00},
	{0x3605 ,0x7c},
	{0x3621 ,0x09},
	{0x3622 ,0x60},
	{0x3604 ,0x40},
	{0x3603 ,0xa7},
	{0x3603 ,0x27},
	{0x4000 ,0x21},
	{0x401d ,0x22},
	{0x3600 ,0x54},
	{0x3605 ,0x04},
	{0x3606 ,0x3f},
	{0x3c01 ,0x80},
	{0x5000 ,0x4f},
	{0x5020 ,0x04},
	{0x5181 ,0x79},
	{0x5182 ,0x00},
	{0x5185 ,0x22},
	{0x5197 ,0x01},
	{0x5001 ,0xff},
	{0x5500 ,0x0a},
	{0x5504 ,0x00},
	{0x5505 ,0x7f},
	{0x5080 ,0x08},
	{0x300e ,0x18},
	{0x4610 ,0x00},
	{0x471d ,0x05},
	{0x4708 ,0x06},
	{0x3808 ,0x02},
	{0x3809 ,0x80},
	{0x380a ,0x01},
	{0x380b ,0xe0},
	{0x380e ,0x07},
	{0x380f ,0xd0},
	{0x501f ,0x00},
	{0x5000 ,0x4f},
	{0x4300 ,0x30},
	{0x3503 ,0x07},
	{0x3501 ,0x73},
	{0x3502 ,0x80},
	{0x350b ,0x00},
	{0x3503 ,0x07},
	{0x3824 ,0x11},
	{0x3501 ,0x1e},
	{0x3502 ,0x80},
	{0x350b ,0x7f},
	{0x380c ,0x0c},
	{0x380d ,0x80},
	{0x380e ,0x03},
	{0x380f ,0xe8},
	{0x3a0d ,0x04},
	{0x3a0e ,0x03},
	{0x3818 ,0xc1},
	{0x3705 ,0xdb},
	{0x370a ,0x81},
	{0x3801 ,0x80},
	{0x3621 ,0x87},
	{0x3801 ,0x50},
	{0x3803 ,0x08},
	{0x3827 ,0x08},
	{0x3810 ,0x40},
	{0x3804 ,0x05},
	{0x3805 ,0x00},
	{0x5682 ,0x05},
	{0x5683 ,0x00},
	{0x3806 ,0x03},
	{0x3807 ,0xc0},
	{0x5686 ,0x03},
	{0x5687 ,0xbc},
	{0x3a00 ,0x78},
	{0x3a1a ,0x05},
	{0x3a13 ,0x30},
	{0x3a18 ,0x00},
	{0x3a19 ,0x7c},
	{0x3a08 ,0x12},
	{0x3a09 ,0xc0},
	{0x3a0a ,0x0f},
	{0x3a0b ,0xa0},
	{0x350c ,0x07},
	{0x350d ,0xd0},
	{0x3500 ,0x00},
	{0x3501 ,0x00},
	{0x3502 ,0x00},
	{0x350a ,0x00},
	{0x350b ,0x00},
	{0x3503 ,0x00},
	{0x528a ,0x02},
	{0x528b ,0x04},
	{0x528c ,0x08},
	{0x528d ,0x08},
	{0x528e ,0x08},
	{0x528f ,0x10},
	{0x5290 ,0x10},
	{0x5292 ,0x00},
	{0x5293 ,0x02},
	{0x5294 ,0x00},
	{0x5295 ,0x02},
	{0x5296 ,0x00},
	{0x5297 ,0x02},
	{0x5298 ,0x00},
	{0x5299 ,0x02},
	{0x529a ,0x00},
	{0x529b ,0x02},
	{0x529c ,0x00},
	{0x529d ,0x02},
	{0x529e ,0x00},
	{0x529f ,0x02},
	{0x3030 ,0x2b},
	{0x3a02 ,0x00},
	{0x3a03 ,0x7d},
	{0x3a04 ,0x00},
	{0x3a14 ,0x00},
	{0x3a15 ,0x7d},
	{0x3a16 ,0x00},
	{0x3a00 ,0x78},
	{0x3a08 ,0x09},
	{0x3a09 ,0x60},
	{0x3a0a ,0x07},
	{0x3a0b ,0xd0},
	{0x3a0d ,0x08},
	{0x3a0e ,0x06},
	{0x5193 ,0x70},
	{0x589b ,0x04},
	{0x589a ,0xc5},
	{0x401e ,0x20},
	{0x4001 ,0x42},
	{0x401c ,0x04},
	{0x528a ,0x01},
	{0x528b ,0x04},
	{0x528c ,0x08},
	{0x528d ,0x10},
	{0x528e ,0x20},
	{0x528f ,0x28},
	{0x5290 ,0x30},
	{0x5292 ,0x00},
	{0x5293 ,0x01},
	{0x5294 ,0x00},
	{0x5295 ,0x04},
	{0x5296 ,0x00},
	{0x5297 ,0x08},
	{0x5298 ,0x00},
	{0x5299 ,0x10},
	{0x529a ,0x00},
	{0x529b ,0x20},
	{0x529c ,0x00},
	{0x529d ,0x28},
	{0x529e ,0x00},
	{0x529f ,0x30},
	{0x5282 ,0x00},
	{0x5300 ,0x00},
	{0x5301 ,0x20},
	{0x5302 ,0x00},
	{0x5303 ,0x7c},
	{0x530c ,0x00},
	{0x530d ,0x0c},
	{0x530e ,0x20},
	{0x530f ,0x80},
	{0x5310 ,0x20},
	{0x5311 ,0x80},
	{0x5308 ,0x20},
	{0x5309 ,0x40},
	{0x5304 ,0x00},
	{0x5305 ,0x30},
	{0x5306 ,0x00},
	{0x5307 ,0x80},
	{0x5314 ,0x08},
	{0x5315 ,0x20},
	{0x5319 ,0x30},
	{0x5316 ,0x10},
	{0x5317 ,0x00},
	{0x5318 ,0x02},
	{0x5402 ,0x3f},
	{0x5403 ,0x00},
	{0x3406 ,0x00},
	{0x5180 ,0xff},
	{0x5181 ,0x52},
	{0x5182 ,0x11},
	{0x5183 ,0x14},
	{0x5184 ,0x25},
	{0x5185 ,0x24},
	{0x5186 ,0x06},
	{0x5187 ,0x08},
	{0x5188 ,0x08},
	{0x5189 ,0x7c},
	{0x518a ,0x60},
	{0x518b ,0xb2},
	{0x518c ,0xb2},
	{0x518d ,0x44},
	{0x518e ,0x3d},
	{0x518f ,0x58},
	{0x5190 ,0x46},
	{0x5191 ,0xf8},
	{0x5192 ,0x04},
	{0x5193 ,0x70},
	{0x5194 ,0xf0},
	{0x5195 ,0xf0},
	{0x5196 ,0x03},
	{0x5197 ,0x01},
	{0x5198 ,0x04},
	{0x5199 ,0x12},
	{0x519a ,0x04},
	{0x519b ,0x00},
	{0x519c ,0x06},
	{0x519d ,0x82},
	{0x519e ,0x00},
	{0x5025 ,0x80},
	{0x5583 ,0x40},
	{0x5584 ,0x40},
	{0x5580 ,0x02},
	{0x5000 ,0xcf},
	{0x3710 ,0x10},
	{0x3632 ,0x51},
	{0x3702 ,0x10},
	{0x3703 ,0xb2},
	{0x3704 ,0x18},
	{0x370b ,0x40},
	{0x370d ,0x03},
	{0x3631 ,0x01},
	{0x3632 ,0x52},
	{0x3606 ,0x24},
	{0x3620 ,0x96},
	{0x5785 ,0x07},
	{0x3a13 ,0x30},
	{0x3600 ,0x52},
	{0x3604 ,0x48},
	{0x3606 ,0x1b},
	{0x370d ,0x0b},
	{0x370f ,0xc0},
	{0x3709 ,0x01},
	{0x3823 ,0x00},
	{0x5007 ,0x00},
	{0x5009 ,0x00},
	{0x5011 ,0x00},
	{0x5013 ,0x00},
	{0x519e ,0x00},
	{0x5086 ,0x00},
	{0x5087 ,0x00},
	{0x5088 ,0x00},
	{0x5089 ,0x00},
	{0x302b ,0x00},
	{0x5001 ,0xFF},
	{0x5583 ,0x50},
	{0x5584 ,0x50},
	{0x5580 ,0x02},
	{0x3c01 ,0x80},
	{0x3c00 ,0x04},
	//;LENS
	{0x5800 ,0x48},
	{0x5801 ,0x31},
	{0x5802 ,0x21},
	{0x5803 ,0x1b},
	{0x5804 ,0x1a},
	{0x5805 ,0x1e},
	{0x5806 ,0x29},
	{0x5807 ,0x38},
	{0x5808 ,0x26},
	{0x5809 ,0x17},
	{0x580a ,0x11},
	{0x580b ,0xe },
	{0x580c ,0xd },
	{0x580d ,0xe },
	{0x580e ,0x13},
	{0x580f ,0x1a},
	{0x5810 ,0x15},
	{0x5811 ,0xd },
	{0x5812 ,0x8 },
	{0x5813 ,0x5 },
	{0x5814 ,0x4 },
	{0x5815 ,0x5 },
	{0x5816 ,0x9 },
	{0x5817 ,0xd },
	{0x5818 ,0x11},
	{0x5819 ,0xa },
	{0x581a ,0x4 },
	{0x581b ,0x0 },
	{0x581c ,0x0 },
	{0x581d ,0x1 },
	{0x581e ,0x6 },
	{0x581f ,0x9 },
	{0x5820 ,0x12},
	{0x5821 ,0xb },
	{0x5822 ,0x4 },
	{0x5823 ,0x0 },
	{0x5824 ,0x0 },
	{0x5825 ,0x1 },
	{0x5826 ,0x6 },
	{0x5827 ,0xa },
	{0x5828 ,0x17},
	{0x5829 ,0xf },
	{0x582a ,0x9 },
	{0x582b ,0x6 },
	{0x582c ,0x5 },
	{0x582d ,0x6 },
	{0x582e ,0xa },
	{0x582f ,0xe },
	{0x5830 ,0x28},
	{0x5831 ,0x1a},
	{0x5832 ,0x11},
	{0x5833 ,0xe },
	{0x5834 ,0xe },
	{0x5835 ,0xf },
	{0x5836 ,0x15},
	{0x5837 ,0x1d},
	{0x5838 ,0x6e},
	{0x5839 ,0x39},
	{0x583a ,0x27},
	{0x583b ,0x1f},
	{0x583c ,0x1e},
	{0x583d ,0x23},
	{0x583e ,0x2f},
	{0x583f ,0x41},
	{0x5840 ,0xe },
	{0x5841 ,0xc },
	{0x5842 ,0xd },
	{0x5843 ,0xc },
	{0x5844 ,0xc },
	{0x5845 ,0xc },
	{0x5846 ,0xc },
	{0x5847 ,0xc },
	{0x5848 ,0xd },
	{0x5849 ,0xe },
	{0x584a ,0xe },
	{0x584b ,0xa },
	{0x584c ,0xe },
	{0x584d ,0xe },
	{0x584e ,0x10},
	{0x584f ,0x10},
	{0x5850 ,0x11},
	{0x5851 ,0xa },
	{0x5852 ,0xf },
	{0x5853 ,0xe },
	{0x5854 ,0x10},
	{0x5855 ,0x10},
	{0x5856 ,0x10},
	{0x5857 ,0xa },
	{0x5858 ,0xe },
	{0x5859 ,0xe },
	{0x585a ,0xf },
	{0x585b ,0xf },
	{0x585c ,0xf },
	{0x585d ,0xa },
	{0x585e ,0x9 },
	{0x585f ,0xd },
	{0x5860 ,0xc },
	{0x5861 ,0xb },
	{0x5862 ,0xd },
	{0x5863 ,0x7 },
	{0x5864 ,0x17},
	{0x5865 ,0x14},
	{0x5866 ,0x18},
	{0x5867 ,0x18},
	{0x5868 ,0x16},
	{0x5869 ,0x12},
	{0x586a ,0x1b},
	{0x586b ,0x1a},
	{0x586c ,0x16},
	{0x586d ,0x16},
	{0x586e ,0x18},
	{0x586f ,0x1f},
	{0x5870 ,0x1c},
	{0x5871 ,0x16},
	{0x5872 ,0x10},
	{0x5873 ,0xf },
	{0x5874 ,0x13},
	{0x5875 ,0x1c},
	{0x5876 ,0x1e},
	{0x5877 ,0x17},
	{0x5878 ,0x11},
	{0x5879 ,0x11},
	{0x587a ,0x14},
	{0x587b ,0x1e},
	{0x587c ,0x1c},
	{0x587d ,0x1c},
	{0x587e ,0x1a},
	{0x587f ,0x1a},
	{0x5880 ,0x1b},
	{0x5881 ,0x1f},
	{0x5882 ,0x14},
	{0x5883 ,0x1a},
	{0x5884 ,0x1d},
	{0x5885 ,0x1e},
	{0x5886 ,0x1a},
	{0x5887 ,0x1a},
	//;AWB
	{0x5180 ,0xff},
	{0x5181 ,0x52},
	{0x5182 ,0x11},
	{0x5183 ,0x14},
	{0x5184 ,0x25},
	{0x5185 ,0x24},
	{0x5186 ,0x14},
	{0x5187 ,0x14},
	{0x5188 ,0x14},
	{0x5189 ,0x69},
	{0x518a ,0x60},
	{0x518b ,0xa2},
	{0x518c ,0x9c},
	{0x518d ,0x36},
	{0x518e ,0x34},
	{0x518f ,0x54},
	{0x5190 ,0x4c},
	{0x5191 ,0xf8},
	{0x5192 ,0x04},
	{0x5193 ,0x70},
	{0x5194 ,0xf0},
	{0x5195 ,0xf0},
	{0x5196 ,0x03},
	{0x5197 ,0x01},
	{0x5198 ,0x05},
	{0x5199 ,0x2f},
	{0x519a ,0x04},
	{0x519b ,0x00},
	{0x519c ,0x06},
	{0x519d ,0xa0},
	{0x519e ,0xa0},
	//;D/S
	{0x528a ,0x00},
	{0x528b ,0x01},
	{0x528c ,0x04},
	{0x528d ,0x08},
	{0x528e ,0x10},
	{0x528f ,0x20},
	{0x5290 ,0x30},
	{0x5292 ,0x00},
	{0x5293 ,0x00},
	{0x5294 ,0x00},
	{0x5295 ,0x01},
	{0x5296 ,0x00},
	{0x5297 ,0x04},
	{0x5298 ,0x00},
	{0x5299 ,0x08},
	{0x529a ,0x00},
	{0x529b ,0x10},
	{0x529c ,0x00},
	{0x529d ,0x20},
	{0x529e ,0x00},
	{0x529f ,0x30},
	{0x5282 ,0x00},
	{0x5300 ,0x00},
	{0x5301 ,0x20},
	{0x5302 ,0x00},
	{0x5303 ,0x7c},
	{0x530c ,0x00},
	{0x530d ,0x10},
	{0x530e ,0x20},
	{0x530f ,0x80},
	{0x5310 ,0x20},
	{0x5311 ,0x80},
	{0x5308 ,0x20},
	{0x5309 ,0x40},
	{0x5304 ,0x00},
	{0x5305 ,0x30},
	{0x5306 ,0x00},
	{0x5307 ,0x80},
	{0x5314 ,0x08},
	{0x5315 ,0x20},
	{0x5319 ,0x30},
	{0x5316 ,0x10},
	{0x5317 ,0x00},
	{0x5318 ,0x02},
	//;CMX //color matrix    
	{0x5380 ,0x01},
	{0x5381 ,0x00},
	{0x5382 ,0x00},
	{0x5383 ,0x1f},
	{0x5384 ,0x00},
	{0x5385 ,0x06},
	{0x5386 ,0x00},
	{0x5387 ,0x00},
	{0x5388 ,0x00},
	{0x5389 ,0xE1},
	{0x538A ,0x00},
	{0x538B ,0x2B},
	{0x538C ,0x00},
	{0x538D ,0x00},
	{0x538E ,0x00},
	{0x538F ,0x10},
	{0x5390 ,0x00},
	{0x5391 ,0xB3},
	{0x5392 ,0x00},
	{0x5393 ,0xA6},
	{0x5394 ,0x08},
	//;GAMMA
	{0x5480 ,0x0c},
	{0x5481 ,0x18},
	{0x5482 ,0x2f},
	{0x5483 ,0x55},
	{0x5484 ,0x64},
	{0x5485 ,0x71},
	{0x5486 ,0x7d},
	{0x5487 ,0x87},
	{0x5488 ,0x91},
	{0x5489 ,0x9a},
	{0x548A ,0xaa},
	{0x548B ,0xb8},
	{0x548C ,0xcd},
	{0x548D ,0xdd},
	{0x548E ,0xea},
	{0x548F ,0x1d},
	{0x5490 ,0x05},
	{0x5491 ,0x00},
	{0x5492 ,0x04},
	{0x5493 ,0x20},
	{0x5494 ,0x03},
	{0x5495 ,0x60},
	{0x5496 ,0x02},
	{0x5497 ,0xB8},
	{0x5498 ,0x02},
	{0x5499 ,0x86},
	{0x549A ,0x02},
	{0x549B ,0x5B},
	{0x549C ,0x02},
	{0x549D ,0x3B},
	{0x549E ,0x02},
	{0x549F ,0x1C},
	{0x54A0 ,0x02},
	{0x54A1 ,0x04},
	{0x54A2 ,0x01},
	{0x54A3 ,0xED},
	{0x54A4 ,0x01},
	{0x54A5 ,0xC5},
	{0x54A6 ,0x01},
	{0x54A7 ,0xA5},
	{0x54A8 ,0x01},
	{0x54A9 ,0x6C},
	{0x54AA ,0x01},
	{0x54AB ,0x41},
	{0x54AC ,0x01},
	{0x54AD ,0x20},
	{0x54AE ,0x00},
	{0x54AF ,0x16},
	{0x54B0 ,0x01},
	{0x54B1 ,0x20},
	{0x54B2 ,0x00},
	{0x54B3 ,0x10},
	{0x54B4 ,0x00},
	{0x54B5 ,0xf0},
	{0x54B6 ,0x00},
	{0x54B7 ,0xDF},
	{0x5402 ,0x3f},
	{0x5403 ,0x00},
	//;UV ADJUST
	{0x5500 ,0x10},
	{0x5502 ,0x00},
	{0x5503 ,0x06},
	{0x5504 ,0x00},
	{0x5505 ,0x7f},
	//;AE
	{0x5025 ,0x80},
	{0x3a0f ,0x30},
	{0x3a10 ,0x28},
	{0x3a1b ,0x30},
	{0x3a1e ,0x28},
	{0x3a11 ,0x61},
	{0x3a1f ,0x10},
	{0x5688 ,0xfd},
	{0x5689 ,0xdf},
	{0x568a ,0xfe},
	{0x568b ,0xef},
	{0x568c ,0xfe},
	{0x568d ,0xef},
	{0x568e ,0xaa},
	{0x568f ,0xaa},
	
	//SVGA preview
	{0x3800 ,0x1 },
	{0x3801 ,0x50},
	{0x3802 ,0x0 },
	{0x3803 ,0x8 },
	{0x3804 ,0x5 },
	{0x3805 ,0x0 },
	{0x3806 ,0x3 },
	{0x3807 ,0xc0},
	{0x3808 ,0x3 },
	{0x3809 ,0x20},
	{0x380a ,0x2 },
	{0x380b ,0x58},
	{0x380c ,0xc },
	{0x380d ,0x80},
	{0x380e ,0x3 },
	{0x380f ,0xe8},
	{0x5001 ,0x7f},
	{0x5680 ,0x0 },
	{0x5681 ,0x0 },
	{0x5682 ,0x5 },
	{0x5683 ,0x0 },
	{0x5684 ,0x0 },
	{0x5685 ,0x0 },
	{0x5686 ,0x3 },
	{0x5687 ,0xc0},
	{0x5687 ,0xc0},
	{0x3815 ,0x02},


	{0xffff, 0xff},
};

const struct sensor_reg OV5642_1080P_Video_setting[] PROGMEM = {

	{0x3103 ,0x93},
	{0x3008 ,0x82},
	{0x3017 ,0x7f},
	{0x3018 ,0xfc},
	{0x3810 ,0xc2},
	{0x3615 ,0xf0},
	{0x3000 ,0x00},
	{0x3001 ,0x00},
	{0x3002 ,0x00},
	{0x3003 ,0x00},
	{0x3004 ,0xff},
	{0x3030 ,0x2b},
	{0x3011 ,0x08},
	{0x3010 ,0x10},
	{0x3604 ,0x60},
	{0x3622 ,0x60},
	{0x3621 ,0x09},
	{0x3709 ,0x00},
	{0x4000 ,0x21},
	{0x401d ,0x22},
	{0x3600 ,0x54},
	{0x3605 ,0x04},
	{0x3606 ,0x3f},
	{0x3c01 ,0x80},
	{0x300d ,0x22},
	{0x3623 ,0x22},
	{0x5000 ,0x4f},
	{0x5020 ,0x04},
	{0x5181 ,0x79},
	{0x5182 ,0x00},
	{0x5185 ,0x22},
	{0x5197 ,0x01},
	{0x5500 ,0x0a},
	{0x5504 ,0x00},
	{0x5505 ,0x7f},
	{0x5080 ,0x08},
	{0x300e ,0x18},
	{0x4610 ,0x00},
	{0x471d ,0x05},
	{0x4708 ,0x06},
	{0x370c ,0xa0},
	{0x3808 ,0x0a},
	{0x3809 ,0x20},
	{0x380a ,0x07},
	{0x380b ,0x98},
	{0x380c ,0x0c},
	{0x380d ,0x80},
	{0x380e ,0x07},
	{0x380f ,0xd0},
	{0x5687 ,0x94},
	{0x501f ,0x00},
	{0x5000 ,0x4f},
	{0x5001 ,0xcf},
	{0x4300 ,0x30},
	{0x4300 ,0x30},
	{0x460b ,0x35},
	{0x471d ,0x00},
	{0x3002 ,0x0c},
	{0x3002 ,0x00},
	{0x4713 ,0x03},
	{0x471c ,0x50},
	{0x4721 ,0x02},
	{0x4402 ,0x90},
	{0x460c ,0x22},
	{0x3815 ,0x44},
	{0x3503 ,0x07},
	{0x3501 ,0x73},
	{0x3502 ,0x80},
	{0x350b ,0x00},
	{0x3818 ,0xc8},
	{0x3801 ,0x88},
	{0x3824 ,0x11},
	{0x3a00 ,0x78},
	{0x3a1a ,0x04},
	{0x3a13 ,0x30},
	{0x3a18 ,0x00},
	{0x3a19 ,0x7c},
	{0x3a08 ,0x12},
	{0x3a09 ,0xc0},
	{0x3a0a ,0x0f},
	{0x3a0b ,0xa0},
	{0x350c ,0x07},
	{0x350d ,0xd0},
	{0x3a0d ,0x08},
	{0x3a0e ,0x06},
	{0x3500 ,0x00},
	{0x3501 ,0x00},
	{0x3502 ,0x00},
	{0x350a ,0x00},
	{0x350b ,0x00},
	{0x3503 ,0x00},
	{0x3030 ,0x2b},
	{0x3a02 ,0x00},
	{0x3a03 ,0x7d},
	{0x3a04 ,0x00},
	{0x3a14 ,0x00},
	{0x3a15 ,0x7d},
	{0x3a16 ,0x00},
	{0x3a00 ,0x78},
	{0x3a08 ,0x09},
	{0x3a09 ,0x60},
	{0x3a0a ,0x07},
	{0x3a0b ,0xd0},
	{0x3a0d ,0x10},
	{0x3a0e ,0x0d},
	{0x4407 ,0x04},
	{0x5193 ,0x70},
	{0x589b ,0x00},
	{0x589a ,0xc0},
	{0x401e ,0x20},
	{0x4001 ,0x42},
	{0x401c ,0x06},
	{0x3825 ,0xac},
	{0x3827 ,0x0c},
	{0x5402 ,0x3f},
	{0x5403 ,0x00},
	{0x3406 ,0x00},
	{0x5180 ,0xff},
	{0x5181 ,0x52},
	{0x5182 ,0x11},
	{0x5183 ,0x14},
	{0x5184 ,0x25},
	{0x5185 ,0x24},
	{0x5186 ,0x06},
	{0x5187 ,0x08},
	{0x5188 ,0x08},
	{0x5189 ,0x7c},
	{0x518a ,0x60},
	{0x518b ,0xb2},
	{0x518c ,0xb2},
	{0x518d ,0x44},
	{0x518e ,0x3d},
	{0x518f ,0x58},
	{0x5190 ,0x46},
	{0x5191 ,0xf8},
	{0x5192 ,0x04},
	{0x5193 ,0x70},
	{0x5194 ,0xf0},
	{0x5195 ,0xf0},
	{0x5196 ,0x03},
	{0x5197 ,0x01},
	{0x5198 ,0x04},
	{0x5199 ,0x12},
	{0x519a ,0x04},
	{0x519b ,0x00},
	{0x519c ,0x06},
	{0x519d ,0x82},
	{0x519e ,0x00},
	{0x5025 ,0x80},
	{0x5583 ,0x40},
	{0x5584 ,0x40},
	{0x5580 ,0x02},
	{0x5000 ,0xcf},
	{0x3710 ,0x10},
	{0x3632 ,0x51},
	{0x3702 ,0x10},
	{0x3703 ,0xb2},
	{0x3704 ,0x18},
	{0x370b ,0x40},
	{0x370d ,0x03},
	{0x3631 ,0x01},
	{0x3632 ,0x52},
	{0x3606 ,0x24},
	{0x3620 ,0x96},
	{0x5785 ,0x07},
	{0x3a13 ,0x30},
	{0x3600 ,0x52},
	{0x3604 ,0x48},
	{0x3606 ,0x1b},
	{0x370d ,0x0b},
	{0x370f ,0xc0},
	{0x3709 ,0x01},
	{0x3823 ,0x00},
	{0x5007 ,0x00},
	{0x5009 ,0x00},
	{0x5011 ,0x00},
	{0x5013 ,0x00},
	{0x519e ,0x00},
	{0x5086 ,0x00},
	{0x5087 ,0x00},
	{0x5088 ,0x00},
	{0x5089 ,0x00},
	{0x302b ,0x00},
	{0x3503 ,0x07},
	{0x3011 ,0x07},
	{0x350c ,0x04},
	{0x350d ,0x58},
	{0x3801 ,0x8a},
	{0x3803 ,0x0a},
	{0x3804 ,0x07},
	{0x3805 ,0x80},
	{0x3806 ,0x04},
	{0x3807 ,0x38},
	{0x3808 ,0x07},
	{0x3809 ,0x80},
	{0x380a ,0x04},
	{0x380b ,0x38},
	{0x380c ,0x09},
	{0x380d ,0xd6},
	{0x380e ,0x04},
	{0x380f ,0x58},
	{0x381c ,0x11},
	{0x381d ,0xba},
	{0x381e ,0x04},
	{0x381f ,0x48},
	{0x3820 ,0x04},
	{0x3821 ,0x18},
	{0x3a08 ,0x14},
	{0x3a09 ,0xe0},
	{0x3a0a ,0x11},
	{0x3a0b ,0x60},
	{0x3a0d ,0x04},
	{0x3a0e ,0x03},
	{0x5682 ,0x07},
	{0x5683 ,0x60},
	{0x5686 ,0x04},
	{0x5687 ,0x1c},
	{0x5001 ,0x7f},
	{0x3503 ,0x00},
	{0x3010 ,0x10},
	{0x5001 ,0xFF},
	{0x5583 ,0x50},
	{0x5584 ,0x50},
	{0x5580 ,0x02},
	{0x3c01 ,0x80},
	{0x3c00 ,0x04},
	//LENS
	{0x5800 ,0x48},
	{0x5801 ,0x31},
	{0x5802 ,0x21},
	{0x5803 ,0x1b},
	{0x5804 ,0x1a},
	{0x5805 ,0x1e},
	{0x5806 ,0x29},
	{0x5807 ,0x38},
	{0x5808 ,0x26},
	{0x5809 ,0x17},
	{0x580a ,0x11},
	{0x580b ,0xe },
	{0x580c ,0xd },
	{0x580d ,0xe },
	{0x580e ,0x13},
	{0x580f ,0x1a},
	{0x5810 ,0x15},
	{0x5811 ,0xd },
	{0x5812 ,0x8 },
	{0x5813 ,0x5 },
	{0x5814 ,0x4 },
	{0x5815 ,0x5 },
	{0x5816 ,0x9 },
	{0x5817 ,0xd },
	{0x5818 ,0x11},
	{0x5819 ,0xa },
	{0x581a ,0x4 },
	{0x581b ,0x0 },
	{0x581c ,0x0 },
	{0x581d ,0x1 },
	{0x581e ,0x6 },
	{0x581f ,0x9 },
	{0x5820 ,0x12},
	{0x5821 ,0xb },
	{0x5822 ,0x4 },
	{0x5823 ,0x0 },
	{0x5824 ,0x0 },
	{0x5825 ,0x1 },
	{0x5826 ,0x6 },
	{0x5827 ,0xa },
	{0x5828 ,0x17},
	{0x5829 ,0xf },
	{0x582a ,0x9 },
	{0x582b ,0x6 },
	{0x582c ,0x5 },
	{0x582d ,0x6 },
	{0x582e ,0xa },
	{0x582f ,0xe },
	{0x5830 ,0x28},
	{0x5831 ,0x1a},
	{0x5832 ,0x11},
	{0x5833 ,0xe },
	{0x5834 ,0xe },
	{0x5835 ,0xf },
	{0x5836 ,0x15},
	{0x5837 ,0x1d},
	{0x5838 ,0x6e},
	{0x5839 ,0x39},
	{0x583a ,0x27},
	{0x583b ,0x1f},
	{0x583c ,0x1e},
	{0x583d ,0x23},
	{0x583e ,0x2f},
	{0x583f ,0x41},
	{0x5840 ,0xe },
	{0x5841 ,0xc },
	{0x5842 ,0xd },
	{0x5843 ,0xc },
	{0x5844 ,0xc },
	{0x5845 ,0xc },
	{0x5846 ,0xc },
	{0x5847 ,0xc },
	{0x5848 ,0xd },
	{0x5849 ,0xe },
	{0x584a ,0xe },
	{0x584b ,0xa },
	{0x584c ,0xe },
	{0x584d ,0xe },
	{0x584e ,0x10},
	{0x584f ,0x10},
	{0x5850 ,0x11},
	{0x5851 ,0xa },
	{0x5852 ,0xf },
	{0x5853 ,0xe },
	{0x5854 ,0x10},
	{0x5855 ,0x10},
	{0x5856 ,0x10},
	{0x5857 ,0xa },
	{0x5858 ,0xe },
	{0x5859 ,0xe },
	{0x585a ,0xf },
	{0x585b ,0xf },
	{0x585c ,0xf },
	{0x585d ,0xa },
	{0x585e ,0x9 },
	{0x585f ,0xd },
	{0x5860 ,0xc },
	{0x5861 ,0xb },
	{0x5862 ,0xd },
	{0x5863 ,0x7 },
	{0x5864 ,0x17},
	{0x5865 ,0x14},
	{0x5866 ,0x18},
	{0x5867 ,0x18},
	{0x5868 ,0x16},
	{0x5869 ,0x12},
	{0x586a ,0x1b},
	{0x586b ,0x1a},
	{0x586c ,0x16},
	{0x586d ,0x16},
	{0x586e ,0x18},
	{0x586f ,0x1f},
	{0x5870 ,0x1c},
	{0x5871 ,0x16},
	{0x5872 ,0x10},
	{0x5873 ,0xf },
	{0x5874 ,0x13},
	{0x5875 ,0x1c},
	{0x5876 ,0x1e},
	{0x5877 ,0x17},
	{0x5878 ,0x11},
	{0x5879 ,0x11},
	{0x587a ,0x14},
	{0x587b ,0x1e},
	{0x587c ,0x1c},
	{0x587d ,0x1c},
	{0x587e ,0x1a},
	{0x587f ,0x1a},
	{0x5880 ,0x1b},
	{0x5881 ,0x1f},
	{0x5882 ,0x14},
	{0x5883 ,0x1a},
	{0x5884 ,0x1d},
	{0x5885 ,0x1e},
	{0x5886 ,0x1a},
	{0x5887 ,0x1a},
	//
	//AWB
	{0x5180 ,0xff},
	{0x5181 ,0x52},
	{0x5182 ,0x11},
	{0x5183 ,0x14},
	{0x5184 ,0x25},
	{0x5185 ,0x24},
	{0x5186 ,0x14},
	{0x5187 ,0x14},
	{0x5188 ,0x14},
	{0x5189 ,0x69},
	{0x518a ,0x60},
	{0x518b ,0xa2},
	{0x518c ,0x9c},
	{0x518d ,0x36},
	{0x518e ,0x34},
	{0x518f ,0x54},
	{0x5190 ,0x4c},
	{0x5191 ,0xf8},
	{0x5192 ,0x04},
	{0x5193 ,0x70},
	{0x5194 ,0xf0},
	{0x5195 ,0xf0},
	{0x5196 ,0x03},
	{0x5197 ,0x01},
	{0x5198 ,0x05},
	{0x5199 ,0x2f},
	{0x519a ,0x04},
	{0x519b ,0x00},
	{0x519c ,0x06},
	{0x519d ,0xa0},
	{0x519e ,0xa0},
	//
	//D/S
	{0x528a ,0x00},
	{0x528b ,0x01},
	{0x528c ,0x04},
	{0x528d ,0x08},
	{0x528e ,0x10},
	{0x528f ,0x20},
	{0x5290 ,0x30},
	{0x5292 ,0x00},
	{0x5293 ,0x00},
	{0x5294 ,0x00},
	{0x5295 ,0x01},
	{0x5296 ,0x00},
	{0x5297 ,0x04},
	{0x5298 ,0x00},
	{0x5299 ,0x08},
	{0x529a ,0x00},
	{0x529b ,0x10},
	{0x529c ,0x00},
	{0x529d ,0x20},
	{0x529e ,0x00},
	{0x529f ,0x30},
	{0x5282 ,0x00},
	{0x5300 ,0x00},
	{0x5301 ,0x20},
	{0x5302 ,0x00},
	{0x5303 ,0x7c},
	{0x530c ,0x00},
	{0x530d ,0x10},
	{0x530e ,0x20},
	{0x530f ,0x80},
	{0x5310 ,0x20},
	{0x5311 ,0x80},
	{0x5308 ,0x20},
	{0x5309 ,0x40},
	{0x5304 ,0x00},
	{0x5305 ,0x30},
	{0x5306 ,0x00},
	{0x5307 ,0x80},
	{0x5314 ,0x08},
	{0x5315 ,0x20},
	{0x5319 ,0x30},
	{0x5316 ,0x10},
	{0x5317 ,0x00},
	{0x5318 ,0x02},
	//
	//CMX //color matrix
	{0x5380 ,0x01},
	{0x5381 ,0x00},
	{0x5382 ,0x00},
	{0x5383 ,0x1f},
	{0x5384 ,0x00},
	{0x5385 ,0x06},
	{0x5386 ,0x00},
	{0x5387 ,0x00},
	{0x5388 ,0x00},
	{0x5389 ,0xE1},
	{0x538A ,0x00},
	{0x538B ,0x2B},
	{0x538C ,0x00},
	{0x538D ,0x00},
	{0x538E ,0x00},
	{0x538F ,0x10},
	{0x5390 ,0x00},
	{0x5391 ,0xB3},
	{0x5392 ,0x00},
	{0x5393 ,0xA6},
	{0x5394 ,0x08},
	//
	//GAMMA
	{0x5480 ,0x0c},
	{0x5481 ,0x18},
	{0x5482 ,0x2f},
	{0x5483 ,0x55},
	{0x5484 ,0x64},
	{0x5485 ,0x71},
	{0x5486 ,0x7d},
	{0x5487 ,0x87},
	{0x5488 ,0x91},
	{0x5489 ,0x9a},
	{0x548A ,0xaa},
	{0x548B ,0xb8},
	{0x548C ,0xcd},
	{0x548D ,0xdd},
	{0x548E ,0xea},
	{0x548F ,0x1d},
	{0x5490 ,0x05},
	{0x5491 ,0x00},
	{0x5492 ,0x04},
	{0x5493 ,0x20},
	{0x5494 ,0x03},
	{0x5495 ,0x60},
	{0x5496 ,0x02},
	{0x5497 ,0xB8},
	{0x5498 ,0x02},
	{0x5499 ,0x86},
	{0x549A ,0x02},
	{0x549B ,0x5B},
	{0x549C ,0x02},
	{0x549D ,0x3B},
	{0x549E ,0x02},
	{0x549F ,0x1C},
	{0x54A0 ,0x02},
	{0x54A1 ,0x04},
	{0x54A2 ,0x01},
	{0x54A3 ,0xED},
	{0x54A4 ,0x01},
	{0x54A5 ,0xC5},
	{0x54A6 ,0x01},
	{0x54A7 ,0xA5},
	{0x54A8 ,0x01},
	{0x54A9 ,0x6C},
	{0x54AA ,0x01},
	{0x54AB ,0x41},
	{0x54AC ,0x01},
	{0x54AD ,0x20},
	{0x54AE ,0x00},
	{0x54AF ,0x16},
	{0x54B0 ,0x01},
	{0x54B1 ,0x20},
	{0x54B2 ,0x00},
	{0x54B3 ,0x10},
	{0x54B4 ,0x00},
	{0x54B5 ,0xf0},
	{0x54B6 ,0x00},
	{0x54B7 ,0xDF},
	//
	{0x5402 ,0x3f},
	{0x5403 ,0x00},
	//
	//UV ADJUST
	{0x5500 ,0x10},
	{0x5502 ,0x00},
	{0x5503 ,0x06},
	{0x5504 ,0x00},
	{0x5505 ,0x7f},
	//AE
	{0x5025 ,0x80},
	{0x3a0f ,0x30},
	{0x3a10 ,0x28},
	{0x3a1b ,0x30},
	{0x3a1e ,0x28},
	{0x3a11 ,0x61},
	{0x3a1f ,0x10},
	{0x5688 ,0xfd},
	{0x5689 ,0xdf},
	{0x568a ,0xfe},
	{0x568b ,0xef},
	{0x568c ,0xfe},
	{0x568d ,0xef},
	{0x568e ,0xaa},
	{0x568f ,0xaa},
	
	{0xffff, 0xff},
};

const struct sensor_reg OV5642_JPEG_Capture_QSXGA[] PROGMEM =
{
	// OV5642_ QSXGA _YUV7.5 fps
	// 24 MHz input clock, 24Mhz pclk
	// jpeg mode 7.5fps

	{0x3503 ,0x07},
	{0x3000 ,0x00},
	{0x3001 ,0x00},
	{0x3002 ,0x00},
	{0x3003 ,0x00},
	{0x3005 ,0xff},
	{0x3006 ,0xff},
	{0x3007 ,0x3f},
	{0x350c ,0x07},
	{0x350d ,0xd0},
	{0x3602 ,0xe4},
	{0x3612 ,0xac},
	{0x3613 ,0x44},
	{0x3621 ,0x27},
	{0x3622 ,0x08},
	{0x3623 ,0x22},
	{0x3604 ,0x60},
	{0x3705 ,0xda},
	{0x370a ,0x80},
	{0x3801 ,0x8a},
	{0x3803 ,0x0a},
	{0x3804 ,0x0a},
	{0x3805 ,0x20},
	{0x3806 ,0x07},
	{0x3807 ,0x98},
	{0x3808 ,0x0a},
	{0x3809 ,0x20},
	{0x380a ,0x07},
	{0x380b ,0x98},
	{0x380c ,0x0c},
	{0x380d ,0x80},
	{0x380e ,0x07},
	{0x380f ,0xd0},
	{0x3810 ,0xc2},
	{0x3815 ,0x44},
	{0x3818 ,0xc8},
	{0x3824 ,0x01},
	{0x3827 ,0x0a},
	{0x3a00 ,0x78},
	{0x3a0d ,0x10},
	{0x3a0e ,0x0d},
	{0x3a10 ,0x32},
	{0x3a1b ,0x3c},
	{0x3a1e ,0x32},
	{0x3a11 ,0x80},
	{0x3a1f ,0x20},
	{0x3a00 ,0x78},
	{0x460b ,0x35},
	{0x471d ,0x00},
	{0x4713 ,0x03},
	{0x471c ,0x50},
	{0x5682 ,0x0a},
	{0x5683 ,0x20},
	{0x5686 ,0x07},
	{0x5687 ,0x98},
	{0x5001 ,0x4f},
	{0x589b ,0x00},
	{0x589a ,0xc0},
	{0x4407 ,0x10},//0x02
	{0x589b ,0x00},
	{0x589a ,0xc0},
	{0x3002 ,0x0c},
	{0x3002 ,0x00},
	{0x3503 ,0x00},
	{0xffff, 0xff},

};



const struct sensor_reg OV5642_RGB_QVGA[] PROGMEM =
{
	
	{0x3103 ,0x93},
	{0x3008 ,0x82},
	{0x3017 ,0x7f},
	{0x3018 ,0xfc},
	{0x3810 ,0xc2},
	{0x3615 ,0xf0},
	{0x3000 ,0x00},
	{0x3001 ,0x00},
	{0x3002 ,0x5c},
	{0x3003 ,0x00},
	{0x3004 ,0xff},
	{0x3005 ,0xff},
	{0x3006 ,0x43},
	{0x3007 ,0x37},
	{0x3011 ,0x08},
	{0x3010 ,0x10},
	{0x460c ,0x22},
	{0x3815 ,0x04},
	{0x370c ,0xa0},
	{0x3602 ,0xfc},
	{0x3612 ,0xff},
	{0x3634 ,0xc0},
	{0x3613 ,0x00},
	{0x3605 ,0x7c},
	{0x3621 ,0x09},
	{0x3622 ,0x60},
	{0x3604 ,0x40},
	{0x3603 ,0xa7},
	{0x3603 ,0x27},
	{0x4000 ,0x21},
	{0x401d ,0x22},
	{0x3600 ,0x54},
	{0x3605 ,0x04},
	{0x3606 ,0x3f},
	{0x3c01 ,0x80},
	{0x5000 ,0x4f},
	{0x5020 ,0x04},
	{0x5181 ,0x79},
	{0x5182 ,0x00},
	{0x5185 ,0x22},
	{0x5197 ,0x01},
	{0x5001 ,0xff},
	{0x5500 ,0x0a},
	{0x5504 ,0x00},
	{0x5505 ,0x7f},
	{0x5080 ,0x08},
	{0x300e ,0x18},
	{0x4610 ,0x00},
	{0x471d ,0x05},
	{0x4708 ,0x06},
	{0x3808 ,0x02},
	{0x3809 ,0x80},
	{0x380a ,0x01},
	{0x380b ,0xe0},
	{0x380e ,0x07},
	{0x380f ,0xd0},
	{0x501f ,0x00},
	{0x5000 ,0x4f},
	{0x4300 ,0x30},
	{0x3503 ,0x07},
	{0x3501 ,0x73},
	{0x3502 ,0x80},
	{0x350b ,0x00},
	{0x3503 ,0x07},
	{0x3824 ,0x11},
	{0x3501 ,0x1e},
	{0x3502 ,0x80},
	{0x350b ,0x7f},
	{0x380c ,0x0c},
	{0x380d ,0x80},
	{0x380e ,0x03},
	{0x380f ,0xe8},
	{0x3a0d ,0x04},
	{0x3a0e ,0x03},
	{0x3818 ,0xc1},
	{0x3705 ,0xdb},
	{0x370a ,0x81},
	{0x3801 ,0x80},
	{0x3621 ,0x87},
	{0x3801 ,0x50},
	{0x3803 ,0x08},
	{0x3827 ,0x08},
	{0x3810 ,0x40},
	{0x3804 ,0x05},
	{0x3805 ,0x00},
	{0x5682 ,0x05},
	{0x5683 ,0x00},
	{0x3806 ,0x03},
	{0x3807 ,0xc0},
	{0x5686 ,0x03},
	{0x5687 ,0xbc},
	{0x3a00 ,0x78},
	{0x3a1a ,0x05},
	{0x3a13 ,0x30},
	{0x3a18 ,0x00},
	{0x3a19 ,0x7c},
	{0x3a08 ,0x12},
	{0x3a09 ,0xc0},
	{0x3a0a ,0x0f},
	{0x3a0b ,0xa0},
	{0x350c ,0x07},
	{0x350d ,0xd0},
	{0x3500 ,0x00},
	{0x3501 ,0x00},
	{0x3502 ,0x00},
	{0x350a ,0x00},
	{0x350b ,0x00},
	{0x3503 ,0x00},
	{0x528a ,0x02},
	{0x528b ,0x04},
	{0x528c ,0x08},
	{0x528d ,0x08},
	{0x528e ,0x08},
	{0x528f ,0x10},
	{0x5290 ,0x10},
	{0x5292 ,0x00},
	{0x5293 ,0x02},
	{0x5294 ,0x00},
	{0x5295 ,0x02},
	{0x5296 ,0x00},
	{0x5297 ,0x02},
	{0x5298 ,0x00},
	{0x5299 ,0x02},
	{0x529a ,0x00},
	{0x529b ,0x02},
	{0x529c ,0x00},
	{0x529d ,0x02},
	{0x529e ,0x00},
	{0x529f ,0x02},
	{0x3030 ,0x2b},
	{0x3a02 ,0x00},
	{0x3a03 ,0x7d},
	{0x3a04 ,0x00},
	{0x3a14 ,0x00},
	{0x3a15 ,0x7d},
	{0x3a16 ,0x00},
	{0x3a00 ,0x78},
	{0x3a08 ,0x09},
	{0x3a09 ,0x60},
	{0x3a0a ,0x07},
	{0x3a0b ,0xd0},
	{0x3a0d ,0x08},
	{0x3a0e ,0x06},
	{0x5193 ,0x70},
	{0x589b ,0x04},
	{0x589a ,0xc5},
	{0x401e ,0x20},
	{0x4001 ,0x42},
	{0x401c ,0x04},
	{0x528a ,0x01},
	{0x528b ,0x04},
	{0x528c ,0x08},
	{0x528d ,0x10},
	{0x528e ,0x20},
	{0x528f ,0x28},
	{0x5290 ,0x30},
	{0x5292 ,0x00},
	{0x5293 ,0x01},
	{0x5294 ,0x00},
	{0x5295 ,0x04},
	{0x5296 ,0x00},
	{0x5297 ,0x08},
	{0x5298 ,0x00},
	{0x5299 ,0x10},
	{0x529a ,0x00},
	{0x529b ,0x20},
	{0x529c ,0x00},
	{0x529d ,0x28},
	{0x529e ,0x00},
	{0x529f ,0x30},
	{0x5282 ,0x00},
	{0x5300 ,0x00},
	{0x5301 ,0x20},
	{0x5302 ,0x00},
	{0x5303 ,0x7c},
	{0x530c ,0x00},
	{0x530d ,0x0c},
	{0x530e ,0x20},
	{0x530f ,0x80},
	{0x5310 ,0x20},
	{0x5311 ,0x80},
	{0x5308 ,0x20},
	{0x5309 ,0x40},
	{0x5304 ,0x00},
	{0x5305 ,0x30},
	{0x5306 ,0x00},
	{0x5307 ,0x80},
	{0x5314 ,0x08},
	{0x5315 ,0x20},
	{0x5319 ,0x30},
	{0x5316 ,0x10},
	{0x5317 ,0x00},
	{0x5318 ,0x02},
	{0x5402 ,0x3f},
	{0x5403 ,0x00},
	{0x3406 ,0x00},
	{0x5180 ,0xff},
	{0x5181 ,0x52},
	{0x5182 ,0x11},
	{0x5183 ,0x14},
	{0x5184 ,0x25},
	{0x5185 ,0x24},
	{0x5186 ,0x06},
	{0x5187 ,0x08},
	{0x5188 ,0x08},
	{0x5189 ,0x7c},
	{0x518a ,0x60},
	{0x518b ,0xb2},
	{0x518c ,0xb2},
	{0x518d ,0x44},
	{0x518e ,0x3d},
	{0x518f ,0x58},
	{0x5190 ,0x46},
	{0x5191 ,0xf8},
	{0x5192 ,0x04},
	{0x5193 ,0x70},
	{0x5194 ,0xf0},
	{0x5195 ,0xf0},
	{0x5196 ,0x03},
	{0x5197 ,0x01},
	{0x5198 ,0x04},
	{0x5199 ,0x12},
	{0x519a ,0x04},
	{0x519b ,0x00},
	{0x519c ,0x06},
	{0x519d ,0x82},
	{0x519e ,0x00},
	{0x5025 ,0x80},
	{0x5583 ,0x40},
	{0x5584 ,0x40},
	{0x5580 ,0x02},
	{0x5000 ,0xcf},
	{0x3710 ,0x10},
	{0x3632 ,0x51},
	{0x3702 ,0x10},
	{0x3703 ,0xb2},
	{0x3704 ,0x18},
	{0x370b ,0x40},
	{0x370d ,0x03},
	{0x3631 ,0x01},
	{0x3632 ,0x52},
	{0x3606 ,0x24},
	{0x3620 ,0x96},
	{0x5785 ,0x07},
	{0x3a13 ,0x30},
	{0x3600 ,0x52},
	{0x3604 ,0x48},
	{0x3606 ,0x1b},
	{0x370d ,0x0b},
	{0x370f ,0xc0},
	{0x3709 ,0x01},
	{0x3823 ,0x00},
	{0x5007 ,0x00},
	{0x5009 ,0x00},
	{0x5011 ,0x00},
	{0x5013 ,0x00},
	{0x519e ,0x00},
	{0x5086 ,0x00},
	{0x5087 ,0x00},
	{0x5088 ,0x00},
	{0x5089 ,0x00},
	{0x302b ,0x00},
	{0x3808 ,0x01},
	{0x3809 ,0x40},
	{0x380a ,0x00},
	{0x380b ,0xf0},
	{0x3a00 ,0x78},
	{0x5001 ,0xFF},
	{0x5583 ,0x50},
	{0x5584 ,0x50},
	{0x5580 ,0x02},
	{0x3c01 ,0x80},
	{0x3c00 ,0x04},
	//;LENS
	{0x5800 ,0x48},
	{0x5801 ,0x31},
	{0x5802 ,0x21},
	{0x5803 ,0x1b},
	{0x5804 ,0x1a},
	{0x5805 ,0x1e},
	{0x5806 ,0x29},
	{0x5807 ,0x38},
	{0x5808 ,0x26},
	{0x5809 ,0x17},
	{0x580a ,0x11},
	{0x580b ,0xe },
	{0x580c ,0xd },
	{0x580d ,0xe },
	{0x580e ,0x13},
	{0x580f ,0x1a},
	{0x5810 ,0x15},
	{0x5811 ,0xd },
	{0x5812 ,0x8 },
	{0x5813 ,0x5 },
	{0x5814 ,0x4 },
	{0x5815 ,0x5 },
	{0x5816 ,0x9 },
	{0x5817 ,0xd },
	{0x5818 ,0x11},
	{0x5819 ,0xa },
	{0x581a ,0x4 },
	{0x581b ,0x0 },
	{0x581c ,0x0 },
	{0x581d ,0x1 },
	{0x581e ,0x6 },
	{0x581f ,0x9 },
	{0x5820 ,0x12},
	{0x5821 ,0xb },
	{0x5822 ,0x4 },
	{0x5823 ,0x0 },
	{0x5824 ,0x0 },
	{0x5825 ,0x1 },
	{0x5826 ,0x6 },
	{0x5827 ,0xa },
	{0x5828 ,0x17},
	{0x5829 ,0xf },
	{0x582a ,0x9 },
	{0x582b ,0x6 },
	{0x582c ,0x5 },
	{0x582d ,0x6 },
	{0x582e ,0xa },
	{0x582f ,0xe },
	{0x5830 ,0x28},
	{0x5831 ,0x1a},
	{0x5832 ,0x11},
	{0x5833 ,0xe },
	{0x5834 ,0xe },
	{0x5835 ,0xf },
	{0x5836 ,0x15},
	{0x5837 ,0x1d},
	{0x5838 ,0x6e},
	{0x5839 ,0x39},
	{0x583a ,0x27},
	{0x583b ,0x1f},
	{0x583c ,0x1e},
	{0x583d ,0x23},
	{0x583e ,0x2f},
	{0x583f ,0x41},
	{0x5840 ,0xe },
	{0x5841 ,0xc },
	{0x5842 ,0xd },
	{0x5843 ,0xc },
	{0x5844 ,0xc },
	{0x5845 ,0xc },
	{0x5846 ,0xc },
	{0x5847 ,0xc },
	{0x5848 ,0xd },
	{0x5849 ,0xe },
	{0x584a ,0xe },
	{0x584b ,0xa },
	{0x584c ,0xe },
	{0x584d ,0xe },
	{0x584e ,0x10},
	{0x584f ,0x10},
	{0x5850 ,0x11},
	{0x5851 ,0xa },
	{0x5852 ,0xf },
	{0x5853 ,0xe },
	{0x5854 ,0x10},
	{0x5855 ,0x10},
	{0x5856 ,0x10},
	{0x5857 ,0xa },
	{0x5858 ,0xe },
	{0x5859 ,0xe },
	{0x585a ,0xf },
	{0x585b ,0xf },
	{0x585c ,0xf },
	{0x585d ,0xa },
	{0x585e ,0x9 },
	{0x585f ,0xd },
	{0x5860 ,0xc },
	{0x5861 ,0xb },
	{0x5862 ,0xd },
	{0x5863 ,0x7 },
	{0x5864 ,0x17},
	{0x5865 ,0x14},
	{0x5866 ,0x18},
	{0x5867 ,0x18},
	{0x5868 ,0x16},
	{0x5869 ,0x12},
	{0x586a ,0x1b},
	{0x586b ,0x1a},
	{0x586c ,0x16},
	{0x586d ,0x16},
	{0x586e ,0x18},
	{0x586f ,0x1f},
	{0x5870 ,0x1c},
	{0x5871 ,0x16},
	{0x5872 ,0x10},
	{0x5873 ,0xf },
	{0x5874 ,0x13},
	{0x5875 ,0x1c},
	{0x5876 ,0x1e},
	{0x5877 ,0x17},
	{0x5878 ,0x11},
	{0x5879 ,0x11},
	{0x587a ,0x14},
	{0x587b ,0x1e},
	{0x587c ,0x1c},
	{0x587d ,0x1c},
	{0x587e ,0x1a},
	{0x587f ,0x1a},
	{0x5880 ,0x1b},
	{0x5881 ,0x1f},
	{0x5882 ,0x14},
	{0x5883 ,0x1a},
	{0x5884 ,0x1d},
	{0x5885 ,0x1e},
	{0x5886 ,0x1a},
	{0x5887 ,0x1a},
	//;AWB
	{0x5180 ,0xff},
	{0x5181 ,0x52},
	{0x5182 ,0x11},
	{0x5183 ,0x14},
	{0x5184 ,0x25},
	{0x5185 ,0x24},
	{0x5186 ,0x14},
	{0x5187 ,0x14},
	{0x5188 ,0x14},
	{0x5189 ,0x69},
	{0x518a ,0x60},
	{0x518b ,0xa2},
	{0x518c ,0x9c},
	{0x518d ,0x36},
	{0x518e ,0x34},
	{0x518f ,0x54},
	{0x5190 ,0x4c},
	{0x5191 ,0xf8},
	{0x5192 ,0x04},
	{0x5193 ,0x70},
	{0x5194 ,0xf0},
	{0x5195 ,0xf0},
	{0x5196 ,0x03},
	{0x5197 ,0x01},
	{0x5198 ,0x05},
	{0x5199 ,0x2f},
	{0x519a ,0x04},
	{0x519b ,0x00},
	{0x519c ,0x06},
	{0x519d ,0xa0},
	{0x519e ,0xa0},
	//;D/S
	{0x528a ,0x00},
	{0x528b ,0x01},
	{0x528c ,0x04},
	{0x528d ,0x08},
	{0x528e ,0x10},
	{0x528f ,0x20},
	{0x5290 ,0x30},
	{0x5292 ,0x00},
	{0x5293 ,0x00},
	{0x5294 ,0x00},
	{0x5295 ,0x01},
	{0x5296 ,0x00},
	{0x5297 ,0x04},
	{0x5298 ,0x00},
	{0x5299 ,0x08},
	{0x529a ,0x00},
	{0x529b ,0x10},
	{0x529c ,0x00},
	{0x529d ,0x20},
	{0x529e ,0x00},
	{0x529f ,0x30},
	{0x5282 ,0x00},
	{0x5300 ,0x00},
	{0x5301 ,0x20},
	{0x5302 ,0x00},
	{0x5303 ,0x7c},
	{0x530c ,0x00},
	{0x530d ,0x10},
	{0x530e ,0x20},
	{0x530f ,0x80},
	{0x5310 ,0x20},
	{0x5311 ,0x80},
	{0x5308 ,0x20},
	{0x5309 ,0x40},
	{0x5304 ,0x00},
	{0x5305 ,0x30},
	{0x5306 ,0x00},
	{0x5307 ,0x80},
	{0x5314 ,0x08},
	{0x5315 ,0x20},
	{0x5319 ,0x30},
	{0x5316 ,0x10},
	{0x5317 ,0x00},
	{0x5318 ,0x02},
	//;CMX
	{0x5380 ,0x01},
	{0x5381 ,0x00},
	{0x5382 ,0x00},
	{0x5383 ,0x1f},
	{0x5384 ,0x00},
	{0x5385 ,0x06},
	{0x5386 ,0x00},
	{0x5387 ,0x00},
	{0x5388 ,0x00},
	{0x5389 ,0xE1},
	{0x538A ,0x00},
	{0x538B ,0x2B},
	{0x538C ,0x00},
	{0x538D ,0x00},
	{0x538E ,0x00},
	{0x538F ,0x10},
	{0x5390 ,0x00},
	{0x5391 ,0xB3},
	{0x5392 ,0x00},
	{0x5393 ,0xA6},
	{0x5394 ,0x08},
	//;GAMMA
	{0x5480 ,0x0c},
	{0x5481 ,0x18},
	{0x5482 ,0x2f},
	{0x5483 ,0x55},
	{0x5484 ,0x64},
	{0x5485 ,0x71},
	{0x5486 ,0x7d},
	{0x5487 ,0x87},
	{0x5488 ,0x91},
	{0x5489 ,0x9a},
	{0x548A ,0xaa},
	{0x548B ,0xb8},
	{0x548C ,0xcd},
	{0x548D ,0xdd},
	{0x548E ,0xea},
	{0x548F ,0x1d},
	{0x5490 ,0x05},
	{0x5491 ,0x00},
	{0x5492 ,0x04},
	{0x5493 ,0x20},
	{0x5494 ,0x03},
	{0x5495 ,0x60},
	{0x5496 ,0x02},
	{0x5497 ,0xB8},
	{0x5498 ,0x02},
	{0x5499 ,0x86},
	{0x549A ,0x02},
	{0x549B ,0x5B},
	{0x549C ,0x02},
	{0x549D ,0x3B},
	{0x549E ,0x02},
	{0x549F ,0x1C},
	{0x54A0 ,0x02},
	{0x54A1 ,0x04},
	{0x54A2 ,0x01},
	{0x54A3 ,0xED},
	{0x54A4 ,0x01},
	{0x54A5 ,0xC5},
	{0x54A6 ,0x01},
	{0x54A7 ,0xA5},
	{0x54A8 ,0x01},
	{0x54A9 ,0x6C},
	{0x54AA ,0x01},
	{0x54AB ,0x41},
	{0x54AC ,0x01},
	{0x54AD ,0x20},
	{0x54AE ,0x00},
	{0x54AF ,0x16},
	{0x54B0 ,0x01},
	{0x54B1 ,0x20},
	{0x54B2 ,0x00},
	{0x54B3 ,0x10},
	{0x54B4 ,0x00},
	{0x54B5 ,0xf0},
	{0x54B6 ,0x00},
	{0x54B7 ,0xDF},
	{0x5402 ,0x3f},
	{0x5403 ,0x00},
	//;UV ADJUST
	{0x5500 ,0x10},
	{0x5502 ,0x00},
	{0x5503 ,0x06},
	{0x5504 ,0x00},
	{0x5505 ,0x7f},
	//;AE
	{0x5025 ,0x80},
	{0x3a0f ,0x30},
	{0x3a10 ,0x28},
	{0x3a1b ,0x30},
	{0x3a1e ,0x28},
	{0x3a11 ,0x61},
	{0x3a1f ,0x10},
	{0x5688 ,0xfd},
	{0x5689 ,0xdf},
	{0x568a ,0xfe},
	{0x568b ,0xef},
	{0x568c ,0xfe},
	{0x568d ,0xef},
	{0x568e ,0xaa},
	{0x568f ,0xaa},
	
	{0x4740,0x21},
	{0x501e,0x2a},
	{0x5002,0xf8},
	{0x501f,0x01},
	{0x4300,0x61},

	{0xffff,0xff},
};        


#endif

