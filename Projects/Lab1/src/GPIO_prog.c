/************************************************/
/* Author	:Anas Kotb
/* Date		:22 FEB 2024
/* Version  :V01
/************************************************/

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"GPIO_private.h"
#include"GPIO_interface.h"
#include"GPIO_config.h"
void GPIO_voidinit(void){
	
	
}

void GPIO_voidSetPinDirection(u8 Copy_u8PortNum,u8 Copy_u8PinNum,u8 Copy_u8Mode){
	switch(Copy_u8PortNum)
	{
		case GPIOA :
					if(Copy_u8PinNum<16 )
					{
						GPIOA_MODER &= ~(0b11 << (Copy_u8PinNum * 2));
					  switch(Copy_u8Mode)
					  {
						case OUTPUT_PUSH_PULL : 
												GPIOA_MODER |=(OUTPUT)<<(Copy_u8PinNum*2) ;
												CLR_BIT(GPIOA_OTYPER,Copy_u8PinNum);
												break;
						case OUTPUT_OPEN_DRAIN : 
                        						GPIOA_MODER |=(OUTPUT)<<(Copy_u8PinNum*2) ;
                        						SET_BIT(GPIOA_OTYPER,Copy_u8PinNum);
												break;
						case INPUT_FLOATING : 
                        						GPIOA_MODER |=(ANALOG)<<(Copy_u8PinNum*2) ;
                        						GPIOA_PUPDR |=(0b00)<<(Copy_u8PinNum*2)  ;
                        						break;
 
						case INPUT_PULL_UP : 
                        						GPIOA_MODER |=(INPUT)<<(Copy_u8PinNum*2) ;
                        						GPIOA_PUPDR |=(0b01)<<(Copy_u8PinNum*2)  ;
												break;
                      
					    case INPUT_PULL_DOWN : 
					  						GPIOA_MODER |=(INPUT)<<(Copy_u8PinNum*2) ;
					  						GPIOA_PUPDR |=(0b10)<<(Copy_u8PinNum*2)  ;
												break;
											
						default: 				break;
						
					  }
					}
					else{
						
						/*error*/
					}	
												break;
					 
					  					

					  
					
	    case GPIOB :
		if(Copy_u8PinNum<16 )
					{
						GPIOB_MODER &= ~(0b11 << (Copy_u8PinNum * 2));
					  switch(Copy_u8Mode)
					  {
						case OUTPUT_PUSH_PULL : 
												GPIOB_MODER |=(OUTPUT)<<(Copy_u8PinNum*2) ;
												CLR_BIT(GPIOB_OTYPER,Copy_u8PinNum);
												break;
						case OUTPUT_OPEN_DRAIN : 
                        						GPIOB_MODER |=(OUTPUT)<<(Copy_u8PinNum*2) ;
                        						SET_BIT(GPIOB_OTYPER,Copy_u8PinNum);
												break;
						case INPUT_FLOATING : 
                        						GPIOB_MODER |=(INPUT)<<(Copy_u8PinNum*2) ;
                        						GPIOB_PUPDR |=(0b00)<<(Copy_u8PinNum*2)  ;
                        						break;
 
						case INPUT_PULL_UP : 
                        						GPIOB_MODER |=(INPUT)<<(Copy_u8PinNum*2) ;
                        						GPIOB_PUPDR |=(0b01)<<(Copy_u8PinNum*2)  ;
												break;
                      
					    case INPUT_PULL_DOWN : 
					  						GPIOB_MODER |=(INPUT)<<(Copy_u8PinNum*2) ;
					  						GPIOB_PUPDR |=(0b10)<<(Copy_u8PinNum*2)  ;
					  						break;
											
						default: break;
					  }
					}  
					else{
						
						/*error*/
					}					  
											break;
		case GPIOC :
		if(Copy_u8PinNum<16 )
					{

			            GPIOC_MODER &= ~(0b11 << (Copy_u8PinNum * 2));

					  switch(Copy_u8Mode)
					  {
						case OUTPUT_PUSH_PULL : 
												GPIOC_MODER |=(OUTPUT)<<(Copy_u8PinNum*2) ;
												CLR_BIT(GPIOC_OTYPER,Copy_u8PinNum);
												break;
						case OUTPUT_OPEN_DRAIN : 
                        						GPIOC_MODER |=(OUTPUT)<<(Copy_u8PinNum*2) ;
                        						SET_BIT(GPIOC_OTYPER,Copy_u8PinNum);
												break;
						case INPUT_FLOATING : 
                        						GPIOC_MODER |=(INPUT)<<(Copy_u8PinNum*2) ;
                        						GPIOC_PUPDR |=(0b00)<<(Copy_u8PinNum*2)  ;
                        						break;
 
						case INPUT_PULL_UP : 
                        						GPIOC_MODER |=(INPUT)<<(Copy_u8PinNum*2) ;
                        						GPIOC_PUPDR |=(0b01)<<(Copy_u8PinNum*2)  ;
												break;
                      
					    case INPUT_PULL_DOWN : 
					  						GPIOC_MODER |=(INPUT)<<(Copy_u8PinNum*2) ;
					  						GPIOC_PUPDR |=(0b10)<<(Copy_u8PinNum*2)  ;
					  						break;
											
						default: break;
					  }
					}  
					else{
						
						/*error*/
					}
											break;
					 
		
		
		default: break;								

	}
	
	
	
}
void GPIO_voidSetPinValue(u8 Copy_u8PortNum,u8 Copy_u8PinNum,u8 Copy_u8Value)
{
	switch(Copy_u8PortNum)
	{
		case GPIOA :
				    if(Copy_u8PinNum<16)
					{
						if(Copy_u8Value==HIGH)
						{
							SET_BIT(GPIOA_ODR,Copy_u8PinNum);
							
						}
						else if(Copy_u8Value==LOW)
						{
							CLR_BIT(GPIOA_ODR,Copy_u8PinNum);
							
						}
						else
						{
							/*error*/
						}
					}

					break;
					
		case GPIOB :
					if(Copy_u8PinNum<16)
					{
						if(Copy_u8Value==HIGH)
						{
							SET_BIT(GPIOB_ODR,Copy_u8PinNum);
							
						}
						else if(Copy_u8Value==LOW)
						{
							CLR_BIT(GPIOB_ODR,Copy_u8PinNum);
							
						}
						else{
							/*error*/
						}
					}

					break;
					
					
		case GPIOC :
					if(Copy_u8PinNum<16)
					{
						if(Copy_u8Value==HIGH)
						{
							GPIOC_MODER |=(OUTPUT)<<(Copy_u8PinNum*2) ;

							SET_BIT(GPIOC_ODR,Copy_u8PinNum);
							
						}
						else if(Copy_u8Value==LOW)
						{
							CLR_BIT(GPIOC_ODR,Copy_u8PinNum);
							
						}
						else{
							/*error*/
						}
					}


					break;
		default:    break;								


	}
	
}
u8 GPIO_u8GetPinValue(u8 Copy_u8PortNum,u8 Copy_u8PinNum)
{
	u8 PIN_VAl=0;
	switch(Copy_u8PortNum)
	{
		case GPIOA: 
				   if(Copy_u8PinNum<16)
				   {
					   PIN_VAl=GET_BIT(GPIOA_IDR,Copy_u8PinNum);
				   }	   
				   break;
		case GPIOB: 
				   if(Copy_u8PinNum<16)
				   {
			           PIN_VAl=GET_BIT(GPIOB_IDR,Copy_u8PinNum);
		           }
				   break;
		case GPIOC: 
				   if(Copy_u8PinNum<16)
				   {
			           PIN_VAl=GET_BIT(GPIOC_IDR,Copy_u8PinNum);
		           }
				   break;
		default:   break;								
	}
	
	return PIN_VAl ;
	
}

void GPIO_voidSetPortValue(u8 Copy_u8PortNum,u8 Copy_u8Pins,u8 Copy_u8Value)
{
	switch(Copy_u8PortNum)
	{

	case GPIOA :
		if(Copy_u8Pins==0)
		{

			GPIOA_ODR |=(Copy_u8Value) ;
		}
		else if(Copy_u8Pins==1){
			GPIOA_ODR |=(Copy_u8Value)<<8 ;


		}
		break;




	case GPIOB :
			if(Copy_u8Pins==0)
			{
				GPIOB_ODR |=(Copy_u8Value) ;
			}
			else if(Copy_u8Pins==1){
				GPIOB_ODR |=(Copy_u8Value)<<8 ;

			}
			break;


	case GPIOC :
			if(Copy_u8Pins==0)
			{
				GPIOC_ODR |=(Copy_u8Value) ;
			}
			else if(Copy_u8Pins==1){
				GPIOC_ODR |=(Copy_u8Value)<<8 ;

			}
			break;

	default: break ;


	}
}
void GPIO_voidClearPortValue(u8 Copy_u8PortNum,u8 Copy_u8Pins)
{
	switch(Copy_u8PortNum)
		{

		case GPIOA :
			if(Copy_u8Pins==0)
			{

				GPIOA_BSRR |=(0b0000000011111111)<<16;
			}
			else if(Copy_u8Pins==1){
				GPIOA_BSRR |=(0b1111111100000000)<<16;
			}
			else{
				GPIOA_BSRR |=(0b1111111111111111)<<16;

			}
			break;




		case GPIOB :
					if(Copy_u8Pins==0)
					{

						GPIOB_BSRR |=(0b0000000011111111)<<16;
					}
					else if(Copy_u8Pins==1){
						GPIOB_BSRR |=(0b1111111100000000)<<16;
					}
					else{
						GPIOB_BSRR |=(0b1111111111111111)<<16;

					}
					break;
		case GPIOC:
					if(Copy_u8Pins==0)
					{

						GPIOC_BSRR |=(0b0000000011111111)<<16;
					}
					else if(Copy_u8Pins==1){
						GPIOC_BSRR |=(0b1111111100000000)<<16;
					}
					else{
						GPIOC_BSRR |=(0b1111111111111111)<<16;

					}
					break;


		default: break ;


		}




}





