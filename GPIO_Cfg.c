#include "GPIO.h"
#include "GPIO_Cfg.h"

const GPIO_CfgType GPIO_ConfigParam[GPIO_GROUPS_NUMBER] =
{
	{
		0x01,1<<0,
		0x00,0,0,
		0x00,
		0xFF,0x00,0x00,
		0x00,0x00,0x00,
		0xFF,
		0
	},
    {
        0x03,1<<0,
        0x00,0,0,
        0x00,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xFF,
        0
    },
    {
        0x05,1<<1,
        0x00,0,0,
        0xFF,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xFF,
        0
    },
    {
        0x05,1<<2,
        0x00,0,0,
        0xFF,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xFF,
        0
    }
};