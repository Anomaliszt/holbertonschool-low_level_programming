#include "main.h"

/**
* print_diagonal - Prints diagonal
* @n: random value
* Return: nothing
*/

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
