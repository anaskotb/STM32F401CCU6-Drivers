/************************************************/
/* Author	:Anas Kotb
/* Date		:13 FEB 2024
/* Version  :V01
/************************************************/

#ifndef		RCC_CONFIG_H
#define 	RCC_CONFIG_H

/* Options:	 RCC_HSE_CRYSTAL
			 RCC_HSE_RC
			 RCC_HSI
			 RCC_PLL
*/

/*Note: please select which is the clock source*/
#define RCC_CLOCK_TYPE 	RCC_HSE_CRYSTAL

/* Options:	 RCC_PLL_IN_HSI_DIV_2
			 RCC_PLL_IN_HSE_DIV_2
			 RCC_PLL_IN_HSE
*/

/*Note:if you Select PLL please select which is the clock source*/

#if     RCC_CLOCK_TYPE==RCC_PLL
#define RCC_PLL_INPUT 	RCC_PLL_IN_HSE_DIV_2 
#endif

/* Options : Choose between 2-16*/

#if     RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_MUL_VAL	4 
#endif

#endif
