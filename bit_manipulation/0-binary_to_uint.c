#include "main.h"

/**
* binary_to_uint - binary to unsigned int
* @b: pointer to string
* Return: unsigned int or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int Num = 0;
	int len = 0;
	int bin = 0;

	if (!b)
		return (0);

	Num = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, bin = 1; len >= 0; len--, bin *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			Num += bin;
		}
	}

	return (Num);
}
