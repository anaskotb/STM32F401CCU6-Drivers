/************************************************/
/* Author	:Anas Kotb
/* Date		:22 FEB 2024
/* Version  :V01
/************************************************/

#ifndef		GPIO_PRIVATE_H
#define 	GPIO_PRIVATE_H

#define GPIOA_BASE_ADDRESS  0x40020000
#define GPIOB_BASE_ADDRESS  0x40020400	
#define GPIOC_BASE_ADDRESS  0x40020800

#define GPIOx_MODER         0x00
#define GPIOx_OTYPER        0x04
#define GPIOx_PUPDR    		0x0C
#define GPIOx_IDR			0x10
#define GPIOx_ODR			0x14
#define GPIOx_BSRR			0x18
			/*Registes Address FOr PortA*/
#define GPIOA_MODER         *((volatile u32*)(GPIOA_BASE_ADDRESS+GPIOx_MODER))
#define GPIOA_OTYPER        *((volatile u32*)(GPIOA_BASE_ADDRESS+GPIOx_OTYPER))
#define GPIOA_PUPDR         *((volatile u32*)(GPIOA_BASE_ADDRESS+GPIOx_PUPDR))
#define GPIOA_IDR           *((volatile u32*)(GPIOA_BASE_ADDRESS+GPIOx_IDR))
#define GPIOA_ODR           *((volatile u32*)(GPIOA_BASE_ADDRESS+GPIOx_ODR))
#define GPIOA_BSRR          *((volatile u32*)(GPIOA_BASE_ADDRESS+GPIOx_BSRR))

			/*Registes Address FOr PortB*/

#define GPIOB_MODER         *((volatile u32*)(GPIOB_BASE_ADDRESS+GPIOx_MODER))
#define GPIOB_OTYPER        *((volatile u32*)(GPIOB_BASE_ADDRESS+GPIOx_OTYPER))
#define GPIOB_PUPDR         *((volatile u32*)(GPIOB_BASE_ADDRESS+GPIOx_PUPDR))
#define GPIOB_IDR           *((volatile u32*)(GPIOB_BASE_ADDRESS+GPIOx_IDR))
#define GPIOB_ODR           *((volatile u32*)(GPIOB_BASE_ADDRESS+GPIOx_ODR))
#define GPIOB_BSRR          *((volatile u32*)(GPIOB_BASE_ADDRESS+GPIOx_BSRR))

			/*Registes Address FOr PortC */

#define GPIOC_MODER         *((volatile u32*)(GPIOC_BASE_ADDRESS+GPIOx_MODER))
#define GPIOC_OTYPER        *((volatile u32*)(GPIOC_BASE_ADDRESS+GPIOx_OTYPER))
#define GPIOC_PUPDR         *((volatile u32*)(GPIOC_BASE_ADDRESS+GPIOx_PUPDR))
#define GPIOC_IDR           *((volatile u32*)(GPIOC_BASE_ADDRESS+GPIOx_IDR))
#define GPIOC_ODR           *((volatile u32*)(GPIOC_BASE_ADDRESS+GPIOx_ODR))
#define GPIOC_BSRR			*((volatile u32*)(GPIOC_BASE_ADDRESS+GPIOx_BSRR))
#endif
