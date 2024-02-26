/************************************************/
/* Author	:Anas Kotb
/* Date		:24 FEB 2024
/* Version  :V01
/************************************************/
#ifndef SEVEN_SEGMENT_INTERFACE_H
#define SEVEN_SEGMENT_INTERFACE_H
#include"STD_TYPES.h"

#define GPIOA 0
#define GPIOB 1

#define FIRST 0
#define LAST 1

void SEVEN_SEGMENT_voidDisplay(u8 Copy_u8Port,u8 Copy_u8Pins,u8 copy_u8Number);
void SEVEN_SEGMENT_voidClearDisplay(u8 Copy_u8Port,u8 Copy_u8Pins);


#endif
