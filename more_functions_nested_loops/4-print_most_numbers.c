#include "main.h"

/**
* print_most_numbers - Prtins numbers except 2 and 4
*
* Return: Nothing
*/

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
			x++;
		_putchar(x);
	}
	_putchar('\n');
}
