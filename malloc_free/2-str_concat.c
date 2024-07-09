#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* *str_concat - fusion of 2 arrays
* @s1: first string
* @s2: second string
* Return: pointer of 2 arrays
*/

char *str_concat(char *s1, char *s2)
{
	int len = 0;
	int len2 = 0;
	char *ptr;
	int i = 0;
	int x = 0;

	while (s1[len])
		len++;

	while (s2[len2])
		len2++;
	len2++;

	ptr = malloc(sizeof(char) * (len + len2));

	for (i = 0; i < len; i++)
		ptr[i] = s1[i];

	for (x = 0; x < len2; x++, i++)
		ptr[i] = s2[x];

	if (!ptr)
		return (NULL);

	return (ptr);
}
