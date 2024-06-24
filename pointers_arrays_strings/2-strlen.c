#include "main.h"

/**
* _strlen - Print length of string
* @s: random string
* Return: returns length
*/

int _strlen(char *s)
{
	int x;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
