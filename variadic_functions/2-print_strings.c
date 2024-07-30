#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - str and new line
 * @separator: str between str
 * @n: number of strings to function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, char *);
		if (!str)
		{
			str = "(nil)";
		}

		while (*str)
		{
			putchar(*str);
			str++;
		}

		if (i + 1 != n && separator)
		{
			const char *sep = separator;

			while (*sep)
			{
				putchar(*sep);
				sep++;
			}
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
