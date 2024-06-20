#include <stdio.h>

/**
* main - Prints in reverse the alphabet
*
* Return: Always 0
*/

int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
	{
		putchar(x);
	}

	putchar(10);
	return (0);
}
