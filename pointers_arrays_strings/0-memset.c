#include "main.h"

/**
* *_memset - memory
* @s: random array
* @b: random char
* @n: random int
* Return: returns s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
