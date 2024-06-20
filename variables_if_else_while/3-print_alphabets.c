#include <stdio.h>

/**
* main - Print 2 alphabets 
*
* Return: Always 0
*/

int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}

	for (x = 65; x <= 90; x++)
	{
		putchar(x);
	}

	putchar(10);
	return (0);
}
