#include "main.h"

/**
* print_last_digit
* @x: number
* Return: Always 0
*/

int print_last_digit(int x)
{
	int y = x % 10;
	int abs;

	if (y < 0)
	{
		abs = y * -1;
		_putchar(abs + 48);
		return(abs);
	}
	else
	{
		_putchar(y + 48);
		return(y);
	}
}
