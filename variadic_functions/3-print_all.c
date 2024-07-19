#include "variadic_functions.h"

/**
 * print_all - prints
 * @format: types arg to function
 * Return: nothing
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char *tmp, *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, (char)va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				tmp = va_arg(args, char *);
				printf("%s%s", sep, tmp ? tmp : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
