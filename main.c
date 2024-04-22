#include "stm32f10x.h"                  // Device header
#include "usart.h"
#include "delay.h"
#include <stdio.h>
int main(void)
{
	SetSystem72Mhz();
	ConfigureTimer3();
	//SystemInit();
	USART1_Configuration();
	//USART_SendChar(USART1,'P');
	char buffer[512];
	int cnt=0;
	
	while(1)
	{
		sprintf(buffer,"\npitch: %d#",cnt+=1);
		USART_SendString(USART1,(uint8_t *)buffer);
		delay(1000);
	}
}