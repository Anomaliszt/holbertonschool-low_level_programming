#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14, 10 times
*
* Return: nothing
*/

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}

