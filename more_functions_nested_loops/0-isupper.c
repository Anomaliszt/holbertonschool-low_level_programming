#include "main.h"

/**
* _isupper - Checks for uppercase letter
* @c: random value
* Return: 1 if uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

