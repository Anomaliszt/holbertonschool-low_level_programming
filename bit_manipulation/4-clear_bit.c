#include "main.h"

/**
* clear_bit - set bit value to 0
* @n: pointer to bit
* @index: index
* Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
