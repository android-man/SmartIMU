/* #include "experiment_stm32f4.h" */

#ifndef __EXPERIMENT_STM32F4_H
#define __EXPERIMENT_STM32F4_H

#include "stm32f4xx.h"
/*====================================================================================================*/
/*====================================================================================================*/
#define LED   PCO(13)
/*====================================================================================================*/
/*====================================================================================================*/
void GPIO_Config( void );
void PWM_Config( void );
/*====================================================================================================*/
/*====================================================================================================*/
#endif	 
