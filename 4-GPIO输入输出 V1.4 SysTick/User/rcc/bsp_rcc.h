#ifndef __BSP_RCC_H
#define __BSP_RCC_H

#include "stm32f10x.h"

// º¯ÊýÉùÃ÷
void HSE_SetSysClock(uint32_t pllmul);
void HSI_SetSysClock(uint32_t pllmul);

#endif /* __BSP_RCC_H */
