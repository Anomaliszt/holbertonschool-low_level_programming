#include "main.h"
#include <stdio.h>

/**
* *_strchr - locates char
* @s: random char
* @c: random char
* Return: returns pointer or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i]); i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (i > 0 && c == '\0')
		return (s + i);
	return (NULL);
}
