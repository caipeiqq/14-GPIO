/**
  ******************************************************************************
  实现功能：
  1.点亮LED  2.按键输入 3.翻转LED
  *
  ******************************************************************************
  */ 
	
	

#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_key.h"

void delay_ms(u16 time);

int LED_Log = 0; // 定义LED_Log为一个全局变量

int main(void)
{
    /* LED 端口初始化 */
    LED_GPIO_Config();
    KEY_GPIO_Config();
    
    GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);

    while (1)
    {
        #if 1
        if (Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == 1)
        {
            if (LED_Log == 1)
            {
                GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
                LED_Log = 0;
            }
            else
            {
                GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
                LED_Log = 1;
            }
        }
        #endif

        #if 0
        if (Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == 1)
        {
            GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
            delay_ms(1000);
        }
        else
        {
            GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
            delay_ms(1000);
        }
        #endif

        #if 0
        if (Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == KEY_ON)
        {
            GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
        }

        if (Key_Scan(KEY2_GPIO_PORT, KEY2_GPIO_PIN) == KEY_ON)
        {
            GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
        }
        #endif
    }
}

void delay_ms(u16 time)
{
    u16 i = 0;
    while (time--)
    {
        i = 7200;  // 自己定义
        while (i--);
    }
}
