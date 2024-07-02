#include "main.h"

/**
* *_memcpy - function for cpy memory
* @dest: destiation
* @src: source
* @n: random int
* Return: returns pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
