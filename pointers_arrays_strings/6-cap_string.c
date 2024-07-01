#include "main.h"

/**
 * is_lower - function for lower char
 * @c: random char
 *
 * Return: 1 if lowercase, 0 if not
 */

int is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/**
 * cap_string - function for capital
 * @s: random string
 *
 * Return: end result
 */

char *cap_string(char *s)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";
	int j;

	if (s[i] != '\0' && is_lower(s[i]))
		s[i] = s[i] - 32;

	while (s[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				if (s[i + 1] != '\0' && is_lower(s[i + 1]))
					s[i + 1] = s[i + 1] - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
