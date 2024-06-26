#include "main.h"

/**
* _atoi - Print from string to int
* @s: random string
*
* Return: returns ints
*/

int _atoi(char *s)
{
	int x;
	unsigned int y = 0;
	int k = 1;
	int end = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == '-')
			k = -k;
		else if (s[x] >= '0' && s[x] <= '9')
		{
			y = (y * 10) + (s[x] - '0');
			end = 1;
		}
		else if (end == 1)
			break;
	}
	return (y * k);
}
