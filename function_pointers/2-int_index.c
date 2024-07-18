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
	int i = 0;

	if (size <= 0 || i == size || !cmp || !array)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (i);
}
