#include "main.h"

/**
* flip_bits - returns the number of bits needed to flip
* @n: num
* @m: flip
* Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = n ^ m;
	unsigned int bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}
