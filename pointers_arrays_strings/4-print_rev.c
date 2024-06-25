#include "main.h"

/**
* print_rev - print reverse
* @s: random string
* Return: nothing
*/

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

