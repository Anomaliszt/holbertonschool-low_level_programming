#include "main.h"

/**
* print_binary - Print binary
* @n: number
*/

void print_binary(unsigned long int n)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
