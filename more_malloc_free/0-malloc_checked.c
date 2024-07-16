#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory
 * @b: random value
 *
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
