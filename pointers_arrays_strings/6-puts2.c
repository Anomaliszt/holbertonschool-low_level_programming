#include "main.h"

/**
* puts2 - Prints every other char
* @str: random string
* Return: nothing
*/

void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
		y++;

	for (x = 0 ; x < y; x += 2)
		_putchar(str[x]);

	_putchar('\n');
}
