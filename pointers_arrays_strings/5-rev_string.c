#include "main.h"

/**
* rev_string - rev the string
* @s: random string
* Return: nothing
*/

void rev_string(char *s)
{
	int x = 0;
	int y;
	int temp;

	while (s[x])
		x++;

	x--;

	for (y = 0; y < x; y++, x--)
	{
		temp = s[y];
		s[y] = s[x];
		s[x] = temp;
	}
}



