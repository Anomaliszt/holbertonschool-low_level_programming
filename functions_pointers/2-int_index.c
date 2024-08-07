#include "function_pointers.h"

/**
* int_index - searching int
* @array: the array
* @size: size of the array
* @cmp: is the function
* Return: i if success
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (0);
}
