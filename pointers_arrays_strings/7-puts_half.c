#include "main.h"

/**
* puts_half - Prints half the string
* @str: random string
* Return: nothing
*/

void puts_half(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
		y++;

	for (x = y / 2; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
