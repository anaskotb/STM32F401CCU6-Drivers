#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "RCC_config.h"
#include "RCC_private.h"
#include "RCC_interface.h"
#include "GPIO_config.h"
#include "GPIO_private.h"
#include "GPIO_interface.h"
#include "SEVEN_SEGMENT_interface.h"
#include "SEVEN_SEGMENT_private.h"
#include "SEVEN_SEGMENT_config.h"
#include "LED.h"
void main (void)
{
	 RCC_voidInitSysClock ();
	 RCC_voidEnableClock(RCC_AHB1,RCC_GPIOA_ENABLE);
	 RCC_voidEnableClock(RCC_AHB1,RCC_GPIOB_ENABLE);
	 RCC_voidEnableClock(RCC_AHB1,2);

	 GPIO_voidSetPinDirection(GPIOC,PIN13,INPUT_PULL_UP);
	 GPIO_voidSetPinDirection(GPIOC,PIN14,INPUT_PULL_UP);
		volatile u8 i=0;
		volatile u8 j=0;
		SEVEN_SEGMENT_voidDisplay(GPIOA,FIRST,0);
		SEVEN_SEGMENT_voidDisplay(GPIOB,FIRST,0);


		while(1)
		{
			u8 Button1_Status = GPIO_u8GetPinValue(GPIOC,PIN13);
			u8 Button2_Status = GPIO_u8GetPinValue(GPIOC,PIN14);
			for(u32 k=0;k<1000000;k++)
			{
				asm("NOP");
			}

			if (Button1_Status==LOW)
			{

				i++;
				SEVEN_SEGMENT_voidClearDisplay(GPIOA,FIRST);
				SEVEN_SEGMENT_voidClearDisplay(GPIOB,FIRST);
				SEVEN_SEGMENT_voidDisplay(GPIOA,FIRST,i);
				SEVEN_SEGMENT_voidDisplay(GPIOB,FIRST,j);

				if(i>9){

					j++;
					i=0;

					SEVEN_SEGMENT_voidClearDisplay(GPIOA,FIRST);
					SEVEN_SEGMENT_voidClearDisplay(GPIOB,FIRST);
					SEVEN_SEGMENT_voidDisplay(GPIOA,FIRST,i);
					SEVEN_SEGMENT_voidDisplay(GPIOB,FIRST,j);

				}

			}
			else if (Button2_Status==LOW)
			{
				if(j==0 && i==0){
					SEVEN_SEGMENT_voidClearDisplay(GPIOA,FIRST);
					SEVEN_SEGMENT_voidClearDisplay(GPIOB,FIRST);
					SEVEN_SEGMENT_voidDisplay(GPIOA,FIRST,i);
					SEVEN_SEGMENT_voidDisplay(GPIOB,FIRST,j);
				}

				else if(j==0 &&i==1)
				{
					i--;
					i=0;
					j=0;
					SEVEN_SEGMENT_voidClearDisplay(GPIOA,FIRST);
					SEVEN_SEGMENT_voidClearDisplay(GPIOB,FIRST);
					SEVEN_SEGMENT_voidDisplay(GPIOA,FIRST,i);
					SEVEN_SEGMENT_voidDisplay(GPIOB,FIRST,j);
				}
				else
				{
					i--;
					SEVEN_SEGMENT_voidClearDisplay(GPIOA,FIRST);
					SEVEN_SEGMENT_voidClearDisplay(GPIOB,FIRST);
					SEVEN_SEGMENT_voidDisplay(GPIOA,FIRST,i);
					SEVEN_SEGMENT_voidDisplay(GPIOB,FIRST,j);

					if(i==0)
					{
						j--;
						i=9;
						SEVEN_SEGMENT_voidClearDisplay(GPIOA,FIRST);
						SEVEN_SEGMENT_voidClearDisplay(GPIOB,FIRST);
						SEVEN_SEGMENT_voidDisplay(GPIOA,FIRST,i);
						SEVEN_SEGMENT_voidDisplay(GPIOB,FIRST,j);

					}
				}
			}

		}
}







