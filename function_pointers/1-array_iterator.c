#include "function_pointers.h"

/**
* array_iterator - execs function on each pointed value of array
* @array: the array
* @size: size of array
* @action: the function
* Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
