#include "main.h"

/**
* puts2 - Prints every other char
* @str: random string
* Return: nothing
*/

void puts2(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}
