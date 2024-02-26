/************************************************/
/* Author	:Anas Kotb
/* Date		:22 FEB 2024
/* Version  :V01
/************************************************/

#ifndef		GPIO_INTERFACE_H
#define 	GPIO_INTERFACE_H

#include"STD_TYPES.h"


#define   GPIOA         0
#define   GPIOB         1
#define   GPIOC         2
		  	          
#define   PIN0          0
#define   PIN1          1
#define   PIN2          2
#define   PIN3          3
#define   PIN4          4
#define   PIN5          5
#define   PIN6          6
#define   PIN7          7
#define   PIN8          8
#define   PIN9          9
#define   PIN10         10
#define   PIN11         11
#define   PIN12         12
#define   PIN13         13
#define   PIN14         14
#define   PIN15         15

#define	  INPUT         0b00
#define	  OUTPUT        0b01
#define   ANALOG        0b11
#define   AF            0b10


#define   OUTPUT_PUSH_PULL      0
#define   OUTPUT_OPEN_DRAIN     1
#define   AF_PUSH_PULL       	2
#define   AF_OPEN_DRAIN  		3
#define   INPUT_FLOATING        4
#define   INPUT_PULL_UP         5
#define   INPUT_PULL_DOWN       6

#define   HIGH 1
#define   LOW  0



void GPIO_voidinit(void);
void GPIO_voidSetPinDirection(u8 Copy_u8PortNum,u8 Copy_u8PinNum,u8 Copy_u8Mode);
void GPIO_voidSetPinValue(u8 Copy_u8PortNum,u8 Copy_u8PinNum,u8 Copy_u8Value);
u8 GPIO_u8GetPinValue(u8 Copy_u8PortNum,u8 Copy_u8PinNum);
void GPIO_voidSetPortValue(u8 Copy_u8PortNum,u8 Copy_u8Pins,u8 Copy_u8Value);
void GPIO_voidClearPortValue(u8 Copy_u8PortNum,u8 Copy_u8Pins);




#endif
