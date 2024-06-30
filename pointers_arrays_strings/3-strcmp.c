#include "main.h"

/**
 * _strcmp - function
 * @s1: random value
 * @s2: random value
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference = 0;

	while (s1[i])
	{
		difference = s1[i] - s2[i];
		if (difference != 0)
			return (difference);
		i++;
	}
	return (difference);
}
