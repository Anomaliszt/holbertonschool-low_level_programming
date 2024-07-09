#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* *_strdup - Duplicates array
* @str: string
* Return: pointer
*
*/

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *ptr;

	while (str[len])
		len++;
	len++;

	ptr = malloc(sizeof(char) * len);

	if (!ptr || !str)
		return (NULL);

	for (; i < len; i++)
		ptr[i] = str[i];
	return (ptr);

}
