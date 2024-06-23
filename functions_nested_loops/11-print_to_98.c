#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Prints up to 98
* @n: input number
* Return: Nothing
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", n++);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", n--);
	}
	else
		printf("%d\n", n);
}
