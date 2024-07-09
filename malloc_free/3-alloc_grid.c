#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* **alloc_grid - allocate space
* @width: width of array
* @height: height of array
* Return: Pointer
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;
	int ii = 0;
	int x = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (!ptr)
		return (NULL);

	while (x < height)
	{
		ptr[x] = malloc(sizeof(int) * width);
		x++;
		if (!ptr)
		{
			while (j < x)
			{
				free(ptr[x - 1]);
				j++;
				x--;
			}
		}
	}

	for (i = 0; i < height; i++)
		for (ii = 0; ii < width; ii++)
			ptr[i][ii] = 0;
	return (ptr);
}
