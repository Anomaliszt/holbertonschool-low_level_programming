#include "main.h"

/**
* print_last_digit - Prints last digit
* @x: number
* Return: abs or y
*/

int print_last_digit(int x)
{
	int y = x % 10;
	int abs;

	if (y < 0)
	{
		abs = y * -1;
		_putchar(abs + 48);
		return (abs);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
}
