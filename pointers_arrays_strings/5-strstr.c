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
	int i = 0;
	int ii = 0;

	while (haystack[i])
	{
		while (needle[ii])
		{
			if (haystack[i + ii] != needle[ii])
				break;
			ii++;
		}

		if (needle[ii] == '\0')
			return (haystack + i);

		i++;
	}

	return (NULL);
}
