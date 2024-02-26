/************************************************/
/* Author	:Anas Kotb
/* Date		:13 FEB 2024
/* Version  :V01
/************************************************/

#ifndef		RCC_INTERFACE_H
#define 	RCC_INTERFACE_H

#define RCC_AHB1                 0
#define RCC_AHB2			     1
#define RCC_APB1 				 2
#define RCC_APB2 			     3

#define RCC_PLL_IN_HSI_DIV_2	 0
#define RCC_PLL_IN_HSE_DIV_2	 1
#define RCC_PLL_IN_HSE  		 2	

#define RCC_HSE_CRYSTAL_ENABLE   	   	0x00010000
#define RCC_HSE_CLOCK_SOURCE   		   	0x00000001
#define RCC_HSE_RC_ENABLE              	0x00050000
#define RCC_HSI_ENABLE                 	0x00000081
#define RCC_HSI_CLOCK_SOURCE  		   	0x00000000
#define RCC_PLL_ENABLE                 	0x00011000
#define RCC_HSE_DIV_2_CLOCK_SOURCE      0x00020001
#define RCC_HSI_DIV_2_CLOCK_SOURCE      0x00000000

#define RCC_GPIOA_ENABLE                 0
#define RCC_GPIOB_ENABLE			     1
#define RCC_GPIOC_ENABLE 				 2

void RCC_voidInitSysClock (void);
void RCC_voidEnableClock(u8 Copy_u8BusId,u8 Copy_u8PerId);
void RCC_voidDisableClock(u8 Copy_u8BusId,u8 Copy_u8PerId);

#endif
