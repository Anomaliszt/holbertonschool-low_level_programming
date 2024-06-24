#include "main.h"

/**
* print_triangle - Prints triangle
* @size: random value
* Return: nothing
*/

void print_triangle(int size)
{
	int x, y, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size - x - 1; y++)
				_putchar(' ');
			for (k = size - x - 1; k < size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
