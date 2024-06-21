#include <stdio.h>

/**
* main - Prints in base 16
*
* Return: Always 0
*/

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
		putchar(x);
	for (x = 97; x <= 102; x++)
		putchar(x);

	putchar(10);
	return (0);
}
