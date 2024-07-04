#include "main.h"
#include <stddef.h>

/**
* *_strstr - function that finds pattern
* @haystack: big string
* @needle: pattern to find
* Return: pointer to haystack or NUl
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int ii;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
			for (ii = 0; needle[ii]; ii++)
				if (haystack[i] == needle[ii])
					return (haystack + i);
	}
	return (NULL);
}
