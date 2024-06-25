#include "main.h"

/**
*
*
*
*/

void rev_string(char *s)
{
	int x = 0;
	int y = 0;

	while (s[x])
		x++;

	for (s[y] = 0; s[y] <= x; s[y]++)
	{
		y = x - y;
	}
}
