#include "main.h"

/**
* print_line - Prints _ n times
* @n: random value
* Return: nothing
*/

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
		_putchar('_');
	_putchar('\n');
}
