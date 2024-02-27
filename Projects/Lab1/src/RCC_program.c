/************************************************/
/* Author	:Anas Kotb
/* Date		:13 FEB 2024
/* Version  :V01
/************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"
void RCC_voidInitSysClock (void)
{
	#if RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
	RCC_CR   = RCC_HSE_CRYSTAL_ENABLE;
	RCC_CFGR = RCC_HSE_CLOCK_SOURCE;
	#elif RCC_CLOCK_TYPE == RCC_HSE_RC
    RCC_CR   = RCC_HSE_RC_ENABLE;
	RCC_CFGR = RCC_HSE_CLOCK_SOURCE;
	#elif RCC_CLOCK_TYPE == RCC_HSI
	RCC_CR   = RCC_HSI_ENABLE;
	RCC_CFGR = RCC_HSI_CLOCK_SOURCE;

	#elif RCC_CLOCK_TYPE == RCC_PLL
	RCC_CR   =RCC_PLL_ENABLE;
	
	#if RCC_PLL_INPUT 	RCC_PLL_IN_HSE_DIV_2
	RCC_CR   =RCC_HSE_CRYSTAL_ENABLE;
    RCC_CR   = RCC_HSE_RC_ENABLE;
	RCC_CFGR =RCC_HSE_DIV_2_CLOCK_SOURCE;	
	
	#elif RCC_PLL_INPUT 	RCC_PLL_IN_HSE
	RCC_CR   =RCC_HSE_CRYSTAL_ENABLE;
    RCC_CR   = RCC_HSE_RC_ENABLE;
	RCC_CFGR = RCC_HSE_CLOCK_SOURCE;
	
	#elif RCC_PLL_INPUT 	RCC_PLL_IN_HSI_DIV_2
	RCC_CR   = RCC_HSI_ENABLE;
	RCC_CFGR = RCC_HSI_DIV_2_CLOCK_SOURCE;	

	#endif
	#else  
	/*Do no thing*/	
	#endif
}

void RCC_voidEnableClock(u8 Copy_u8BusId,u8 Copy_u8PerId)
{
	if(Copy_u8PerId<31)
	{
		switch(Copy_u8BusId)
		{
			case RCC_AHB1 : SET_BIT(RCC_AHB1ENR,Copy_u8PerId);	break;
			case RCC_AHB2 : SET_BIT(RCC_AHB2ENR,Copy_u8PerId);	break;
			case RCC_APB1 : SET_BIT(RCC_APB1ENR,Copy_u8PerId);	break;
			case RCC_APB2 : SET_BIT(RCC_APB2ENR,Copy_u8PerId); break;

			
		}
	}
	else
	{
		
		/*return error*/
	}
	
	
}

void RCC_voidDisableClock(u8 Copy_u8BusId,u8 Copy_u8PerId){
	if(Copy_u8PerId<31)
	{
		switch(Copy_u8BusId)
		{
			case RCC_AHB1 : CLR_BIT(RCC_AHB1ENR,Copy_u8PerId);	break;
			case RCC_AHB2 : CLR_BIT(RCC_AHB2ENR,Copy_u8PerId);	break;
			case RCC_APB1 : CLR_BIT(RCC_APB1ENR,Copy_u8PerId);	break;
			case RCC_APB2 : CLR_BIT(RCC_APB2ENR,Copy_u8PerId) ;  break;
			
		}
	}
	else
	{
		
		/*return error*/
	}
	
	
}
