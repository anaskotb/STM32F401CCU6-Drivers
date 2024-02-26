/************************************************/
/* Author	:Anas Kotb
/* Date		:13 FEB 2024
/* Version  :V01
/************************************************/

#ifndef		RCC_PRIVATE_H
#define 	RCC_PRIVATE_H

#define  RCC_BASE_ADDRESS   0x40023800

		/*Registers Defination*/

#define RCC_CR	    	*((volatile u32*)(RCC_BASE_ADDRESS+0x00))
#define RCC_CFGR		*((volatile u32*)(RCC_BASE_ADDRESS+0x08))
#define RCC_CIR			*((volatile u32*)(RCC_BASE_ADDRESS+0x0C))
#define RCC_AHB1RSTR	*((volatile u32*)(RCC_BASE_ADDRESS+0x10))
#define RCC_AHB2RSTR	*((volatile u32*)(RCC_BASE_ADDRESS+0x14))
#define RCC_APB1RSTR	*((volatile u32*)(RCC_BASE_ADDRESS+0x20))
#define RCC_APB2RSTR	*((volatile u32*)(RCC_BASE_ADDRESS+0x24))
#define RCC_AHB1ENR		*((volatile u32*)(RCC_BASE_ADDRESS+0x30))
#define RCC_AHB2ENR		*((volatile u32*)(RCC_BASE_ADDRESS+0x34))
#define RCC_APB1ENR		*((volatile u32*)(RCC_BASE_ADDRESS+0x40))
#define RCC_APB2ENR		*((volatile u32*)(RCC_BASE_ADDRESS+0x44))
#define RCC_BDCR		*((volatile u32*)(RCC_BASE_ADDRESS+0x70))
#define RCC_CSR			*((volatile u32*)(RCC_BASE_ADDRESS+0x74))
 

#define		RCC_HSE_CRYSTAL 0
#define	    RCC_HSE_RC      1
#define	    RCC_HSI         2
#define	    RCC_PLL         3 


#endif
