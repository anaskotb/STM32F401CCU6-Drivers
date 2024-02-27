/************************************************/
/* Author	:Anas Kotb
/* Date		:24 FEB 2024
/* Version  :V01
/************************************************/

#include "SEVEN_SEGMENT_interface.h"
#include "SEVEN_SEGMENT_private.h"
#include "SEVEN_SEGMENT_config.h"
#include "GPIO_interface.h"
#include"STD_TYPES.h"


void SEVEN_SEGMENT_voidDisplay(u8 Copy_u8Port,u8 Copy_u8Pins,u8 copy_u8Number)
{
	if (Copy_u8Port == GPIOA)
	{
		
		if (Copy_u8Pins==FIRST)
		{
			GPIO_voidSetPinDirection(GPIOA,PIN0,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOA,PIN1,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOA,PIN2,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOA,PIN3,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOA,PIN4,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOA,PIN5,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOA,PIN6,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOA,PIN7,OUTPUT_PUSH_PULL);
		    switch (copy_u8Number)
		    		{
						case 0  : GPIO_voidSetPortValue(GPIOA,FIRST,ZERO);   break;
		    			case 1  : GPIO_voidSetPortValue(GPIOA,FIRST,ONE);   break;
		    			case 2  : GPIO_voidSetPortValue(GPIOA,FIRST,TWO);   break;
		    			case 3: GPIO_voidSetPortValue(GPIOA,FIRST,THREE); break;
		    			case 4 : GPIO_voidSetPortValue(GPIOA,FIRST,FOUR);  break;
		    			case 5 : GPIO_voidSetPortValue(GPIOA,FIRST,FIVE);  break;
		    			case 6  : GPIO_voidSetPortValue(GPIOA,FIRST,SIX);   break;
		    			case 7: GPIO_voidSetPortValue(GPIOA,FIRST,SEVEN); break;
		    			case 8: GPIO_voidSetPortValue(GPIOA,FIRST,EIGHT); break;
		    			case 9 : GPIO_voidSetPortValue(GPIOA,FIRST,NINE);  break;


		    		}
		}		
		else if (Copy_u8Pins==LAST)
		{
	GPIO_voidSetPinDirection(GPIOA,PIN8,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOA,PIN9,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOA,PIN10,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOA,PIN11,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOA,PIN12,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOA,PIN13,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOA,PIN14,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOA,PIN15,OUTPUT_PUSH_PULL);
    switch (copy_u8Number)
        		{
    				case 0  : GPIO_voidSetPortValue(GPIOA,LAST,ZERO);   break;
        			case 1: GPIO_voidSetPortValue(GPIOA,LAST,ONE);   break;
        			case 2: GPIO_voidSetPortValue(GPIOA,LAST,TWO);   break;
        			case 3: GPIO_voidSetPortValue(GPIOA,LAST,THREE); break;
        			case 4: GPIO_voidSetPortValue(GPIOA,LAST,FOUR);  break;
        			case 5: GPIO_voidSetPortValue(GPIOA,LAST,FIVE);  break;
        			case 6: GPIO_voidSetPortValue(GPIOA,LAST,SIX);   break;
        			case 7: GPIO_voidSetPortValue(GPIOA,LAST,SEVEN); break;
        			case 8: GPIO_voidSetPortValue(GPIOA,LAST,EIGHT); break;
        			case 9: GPIO_voidSetPortValue(GPIOA,LAST,NINE);  break;


        		}

		}

	}

	else if (Copy_u8Port == GPIOB)
	{
		if (Copy_u8Pins==FIRST)
		{
			GPIO_voidSetPinDirection(GPIOB,PIN0,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOB,PIN1,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOB,PIN2,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOB,PIN3,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOB,PIN4,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOB,PIN5,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOB,PIN6,OUTPUT_PUSH_PULL);
			GPIO_voidSetPinDirection(GPIOB,PIN7,OUTPUT_PUSH_PULL);
		    switch (copy_u8Number)
		    		{
						case 0  : GPIO_voidSetPortValue(GPIOB,FIRST,ZERO);   break;
		    			case 1  : GPIO_voidSetPortValue(GPIOB,FIRST,ONE);   break;
		    			case 2  : GPIO_voidSetPortValue(GPIOB,FIRST,TWO);   break;
		    			case 3 : GPIO_voidSetPortValue(GPIOB,FIRST,THREE); break;
		    			case 4 : GPIO_voidSetPortValue(GPIOB,FIRST,FOUR);  break;
		    			case 5 : GPIO_voidSetPortValue(GPIOB,FIRST,FIVE);  break;
		    			case 6 : GPIO_voidSetPortValue(GPIOB,FIRST,SIX);   break;
		    			case 7: GPIO_voidSetPortValue(GPIOB,FIRST,SEVEN); break;
		    			case 8: GPIO_voidSetPortValue(GPIOB,FIRST,EIGHT); break;
		    			case 9 : GPIO_voidSetPortValue(GPIOB,FIRST,NINE);  break;


		    		}
		}		
		else if (Copy_u8Pins==LAST)
		{
	GPIO_voidSetPinDirection(GPIOB,PIN8,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOB,PIN9,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOB,PIN10,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOB,PIN11,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOB,PIN12,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOB,PIN13,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOB,PIN14,OUTPUT_PUSH_PULL);
    GPIO_voidSetPinDirection(GPIOB,PIN15,OUTPUT_PUSH_PULL);

    switch (copy_u8Number)
    		{
				case 0  : GPIO_voidSetPortValue(GPIOB,LAST,ZERO);   break;
    			case 1  : GPIO_voidSetPortValue(GPIOB,LAST,ONE);   break;
    			case 2  : GPIO_voidSetPortValue(GPIOB,LAST,TWO);   break;
    			case 3: GPIO_voidSetPortValue(GPIOB,LAST,THREE); break;
    			case 4 : GPIO_voidSetPortValue(GPIOB,LAST,FOUR);  break;
    			case 5 : GPIO_voidSetPortValue(GPIOB,LAST,FIVE);  break;
    			case 6  : GPIO_voidSetPortValue(GPIOB,LAST,SIX);   break;
    			case 7: GPIO_voidSetPortValue(GPIOB,LAST,SEVEN); break;
    			case 8: GPIO_voidSetPortValue(GPIOB,LAST,EIGHT); break;
    			case 9 : GPIO_voidSetPortValue(GPIOB,LAST,NINE);  break;


    		}
		}

	}
}
void SEVEN_SEGMENT_voidClearDisplay(u8 Copy_u8Port,u8 Copy_u8Pins)
{
	GPIO_voidClearPortValue(Copy_u8Port,Copy_u8Pins);

}




