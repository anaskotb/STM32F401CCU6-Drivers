/************************************************/
/* Author	:Anas Kotb
/* Date		:25 FEB 2024
/* Version  :V01
/************************************************/

#include "GPIO_interface.h"
#include "STD_TYPES.h"

void LED_ON (u8 Copy_u8Port,u8 Copy_u8pin)
{
	GPIO_voidSetPinDirection(Copy_u8Port,Copy_u8pin,OUTPUT_PUSH_PULL);
	GPIO_voidSetPinValue(Copy_u8Port,Copy_u8pin,HIGH);

	
}
void LED_OFF (u8 Copy_u8Port,u8 Copy_u8pin)
{
	GPIO_voidSetPinDirection(Copy_u8Port,Copy_u8pin,OUTPUT_PUSH_PULL);
	GPIO_voidSetPinValue(Copy_u8Port,Copy_u8pin,LOW);
	
}
void LED_TOG(u8 Copy_u8Port,u8 Copy_u8pin)
{
	GPIO_voidSetPinDirection(Copy_u8Port,Copy_u8pin,OUTPUT_PUSH_PULL);
	u8 VAL= GPIO_u8GetPinValue(Copy_u8Port,Copy_u8pin);

	if(VAL==HIGH)
	{
		GPIO_voidSetPinValue(Copy_u8Port,Copy_u8pin,LOW);
	}
	else if(VAL==LOW)
	{
	    GPIO_voidSetPinValue(Copy_u8Port,Copy_u8pin,HIGH);

	}
	else
	{
		/*error*/
	}
	
	
}