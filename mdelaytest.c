#include <stdio.h>

void delay_short(volatile unsigned int n)
{
	while(n--){}
}

void delay(volatile unsigned int n)
{
	while(n--)
	{
		delay_short(0x7ff);
	}
}

void delay_long(volatile unsigned int n)
{
	while(n--)
	{
		delay(0x9ff);
	}
}