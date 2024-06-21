#include <stdio.h>

/**
* main - Prints base 10 with commas and $sign
*
* Return: Always 0
*/

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x <= 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(36);
	putchar(10);
	return (0);
}
