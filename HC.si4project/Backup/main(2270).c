/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   dht11温湿度传感器测试实验
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 霸道 STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "stm32f10x.h"
#include "bsp_usart.h"
#include "bsp_led.h"
#include "bsp_ili9341_lcd.h"


/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main(void)
{
//	char dispBuff[100];
//  
//	DHT11_Data_TypeDef DHT11_Data;

//	/* 初始化系统定时器 */
//	SysTick_Init();
//  
//  //LCD 初始化
//	ILI9341_Init (); 
// //其中0、3、5、6 模式适合从左至右显示文字，
// //不推荐使用其它模式显示文字	其它模式显示文字会有镜像效果			
// //其中 6 模式为大部分液晶例程的默认显示方向  
//	ILI9341_GramScan ( 6 );

//  ILI9341_Clear(0,0,LCD_X_LENGTH,LCD_Y_LENGTH);	/* 清屏，显示全黑 */
//  
//	/*初始化DTT11的引脚*/
//	DHT11_Init ();
    uint8_t ch;
    USART_Config();
	LED_GPIO_Config();

    printf( "这是一个串口控制RGB灯的程序\n" );
    
	while(1)
	{	
		ch = getchar();
	    printf( "ch=%c\n",ch );
        switch (ch)
        {
            case '1': LED_RED;
                break;
            case '2': LED_GREEN;
                break;
            case '3': LED_BLUE;
                break;
            default: LED_RGBOFF;
								break;    
        }
	}
}
/*********************************************END OF FILE**********************/
