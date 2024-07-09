#include "main.h"

/**
 * _strlen_recursion - strlen
 * @s: random value
 * Return: returns itself
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(++s) + 1);
}
