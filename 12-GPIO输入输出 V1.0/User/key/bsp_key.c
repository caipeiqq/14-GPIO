/**
  ******************************************************************************
  * @file    bsp_led.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   led应用函数接口
  ******************************************************************************
  * @attention
  *
  * 实验平台:秉火 F103-指南者 STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */

#include "bsp_key.h"

void KEY_GPIO_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    
    /*开启按键端口的时钟--使能两个时钟*/
    RCC_APB2PeriphClockCmd(KEY1_GPIO_CLK|KEY2_GPIO_CLK,ENABLE);
    
  //key1配置
    GPIO_InitStructure.GPIO_Pin = KEY1_GPIO_PIN;                  //选择按键的引脚   
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING; // 设置按键的引脚为浮空输入
    GPIO_Init(KEY1_GPIO_PORT, &GPIO_InitStructure);           //使用结构体初始化按键
     
  //key2配置
    GPIO_InitStructure.GPIO_Pin = KEY2_GPIO_PIN;                 //选择按键的引脚    
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING; //设置按键的引脚为浮空输入
    GPIO_Init(KEY2_GPIO_PORT, &GPIO_InitStructure);            //使用结构体初始化按键
}

/*********************************************END OF FILE**********************/


uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin)
{           
    /*检测是否有按键按下 */
    if(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin) == KEY_ON )  
    {    
        /*等待按键释放 */
        while(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin) == KEY_ON );   
        return  1;  
    }
    else
        return 0;
}
