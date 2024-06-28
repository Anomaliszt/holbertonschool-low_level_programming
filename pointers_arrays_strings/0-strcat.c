#include "main.h"

/**
* *_strcat - appends str to dest
* @dest: destination
* @src: the one to append
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int y;

	while (dest[len])
		len++;

	for (y = 0; src[y] != '\0'; y++, len++)
		dest[len] = src[y];
	return (dest);
}
