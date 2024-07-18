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

	if (!cmp || !array)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
		{
			break;
		}
	}

	if (size <= 0 || i == size)
		return (-1);

	return (i);
}
