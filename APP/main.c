#include "SWM220.h"


int main(void)
{	
	SystemInit();
	
	GPIO_Init(GPIOC, PIN1, 0, 1, 0, 0);			//输入，上拉使能，接KEY
	
	GPIO_Init(GPIOA, PIN7, 1, 0, 0, 1);			//输出， 接LED

	while(1==1)
	{
		if(GPIO_GetBit(GPIOC, PIN1) == 0)		//按键被按下
		{
			GPIO_SetBit(GPIOA, PIN7);
		}
		else
		{
			GPIO_ClrBit(GPIOA, PIN7);
		}
	}
}

