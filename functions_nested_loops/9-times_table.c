#include "main.h"

/**
* times_table - Prints the talbe of 9
*
* Return: Always 0
*/

void times_table(void)
{
	int abs;
	int ord;



	for (abs = 1; abs <= 9; abs++)
		for (ord = 0; ord <= 9; ord++)
		{

		_putchar(abs * ord + '0');
		_putchar('\n');
		}


}
