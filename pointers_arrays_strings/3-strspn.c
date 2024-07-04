#include "main.h"

/**
* _strspn - function to get length
* @s: string
* @accept: string
* Return: k
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int ii;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (s[i] == accept[ii])
				k++;
			if (s[i] <= 'A' || (s[i] >= 'Z' && s[i] <= 'a') || s[i] >= 'z')
				return (k);
		}
	}
	return (k);
}
