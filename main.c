#include <stdint.h>
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "BTN.h"



int main(void)
{
	uint8_t StateX;
	uint8_t StateY;
    GPIO_Init();
	BTN_Init();
    while(1)
	{
        BTN_GetBtnState(0, &StateX);
        BTN_GetBtnState(1, &StateY);
        if(StateX == BTN_JPRSD)
        {
            GPIO_Write(2, 0xFF);
        }
        else if(StateY == BTN_ON)
        {
            GPIO_Write(3, 0xFF);
        }
        else
        {
            GPIO_Write(2, 0x00);
            GPIO_Write(3, 0x00);
        }
	}
    return 0;
}
