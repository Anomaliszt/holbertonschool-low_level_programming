#include "main.h"
#include <stddef.h>

/**
* *_strpbrk - Function that locates first occurence in a string
* @s: randon string
* @accept: random string to locate
* Return: pointer to s or null
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int ii;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (s[i] == accept[ii])
				return (s + i);
		}
	}
	return (NULL);
}

