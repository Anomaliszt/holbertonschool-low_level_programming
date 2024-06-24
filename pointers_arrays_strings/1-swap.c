#include "main.h"

/**
* swap_int - swaps ints
* @a: random value
* @b: random value
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
