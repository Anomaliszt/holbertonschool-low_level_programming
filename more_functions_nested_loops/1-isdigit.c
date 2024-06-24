#include "main.h"

/**
* _isdigit - Returns if c is a digit
* @c: random value
* Return: 1 if digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
