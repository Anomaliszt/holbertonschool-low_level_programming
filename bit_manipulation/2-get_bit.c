#include "main.h"

/**
* get_bit - Get Value of bit
* @n: bit
* @index: index
* Return: 1 or 0
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
