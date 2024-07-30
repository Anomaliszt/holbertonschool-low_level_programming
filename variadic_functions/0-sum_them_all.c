#include "variadic_functions.h"

/**
* sum_them_all - sum of parameters
* @n: nummber of parameters
*
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int s = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
	{
		s += va_arg(args, int);
	}

	va_end(args);
	return (s);
}
