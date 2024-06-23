#include "main.h"

/**
* times_table - Prints the talbe of 9
*
* Return: Always 0
*/

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int calcul = x * y;

			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (calcul < 10 && y != 0)
			{
				_putchar(' ');
			}
			if (calcul >= 10)
			{
				_putchar((calcul / 10) + '0');
			}
			_putchar((calcul % 10) + '0');
		}
		_putchar('\n');
	}
}
