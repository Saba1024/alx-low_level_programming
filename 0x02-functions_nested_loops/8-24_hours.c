#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of jack bauer,start 1
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * add resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <=23)
	{
		while (minutes <= 59)
		{
			hours_remainder + hours % 10;
			_putchar(hours /10 + '0');
			_putchar('':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_pputchar('\n')
		}
		hours++;
		minutes = 0;
	}
}