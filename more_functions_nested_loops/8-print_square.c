#include "main.h"

/**
* print_square - Print square
* @size: random value
* Return: Returns nothing
*/

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 1; y < size; y++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
}
