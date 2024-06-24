#include "main.h"

/**
* puts2 - Prints every other char
* @str: random string
* Return: nothing
*/

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
