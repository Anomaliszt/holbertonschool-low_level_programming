#include "main.h"

/**
* jack_bauer - Prints every minute of the day
*
* Return: Always 0
*/

void jack_bauer(void)
{
	int hour;
	int min;
	int hourb;
	int minb;

	for (hour = 0; hour <= 1; hour++)
		for (min = 0; min <= 9; min++)
			for (hourb = 0; hourb <= 5; hourb++)
				for (minb = 0; minb <= 9; minb++)
				{
				_putchar(hour + '0');
				_putchar(min + '0');
				_putchar(':');
				_putchar(hourb + '0');
				_putchar(minb + '0');
				_putchar('\n');
				}

	for (hour = 2; hour <= 2; hour++)
		for (min = 0; min <= 3; min++)
			for (hourb = 0; hourb <= 5; hourb++)
				for (minb = 0; minb <= 9; minb++)
				{
				_putchar(hour + '0');
				_putchar(min + '0');
				_putchar(':');
				_putchar(hourb + '0');
				_putchar(minb + '0');
				_putchar('\n');
				}
}
