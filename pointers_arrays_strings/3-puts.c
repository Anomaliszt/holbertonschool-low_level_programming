#include "main.h"

/**
* _puts - Prints a set of pointed strings
* @str: random string
* Return: nothing
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
