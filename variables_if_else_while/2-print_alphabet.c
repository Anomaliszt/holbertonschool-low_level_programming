#include <stdio.h>

/**
* main - Print alphabet
*
* Return: Always 0
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
