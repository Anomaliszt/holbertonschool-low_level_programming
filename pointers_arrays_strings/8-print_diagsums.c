#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_diagsums - sum of diagonals
* @a: random value
* @size: size of tableau
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int x;
	int y = size;
	int total = 0;
	int total2 = 0;

	for (x = 0; x < size ; x++, y--)
	{
		total = total + a[(size + 1) * x];
		total2 = total2 + a[(size - 1) * (x + 1)];
	}
	printf("%d, %d\n", total, total2);
}
