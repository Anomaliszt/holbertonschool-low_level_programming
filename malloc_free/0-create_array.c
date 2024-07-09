#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* *create_array - Create array
* @size: size of
* @c: value in array
* Return: Pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || !ptr)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
