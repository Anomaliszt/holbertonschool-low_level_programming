#include "main.h"

/**
 * _strncpy - function
 * @dest: random value
 * @src: random value
 * @n: random valuie
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((dest[i] || src[i]) && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
