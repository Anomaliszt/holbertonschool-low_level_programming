#include <stdio.h>

/**
* main - Print alphabet except e and q
*
* Return: Always 0
*/

int main(void)
{
	int x;
	for (x = 97; x <= 122; x++)
	{
		if (x == 101 || x == 113)
			x++;
		putchar(x);
	}

	putchar(10);
	return (0);
}
