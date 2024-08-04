#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip to get from one number to another
* @n: num
* @m: flip
* Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = n ^ m, bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}
