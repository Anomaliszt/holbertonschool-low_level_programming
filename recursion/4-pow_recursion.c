#include "main.h"

/**
 * _pow_recursion - power of
 * @x: random input
 * @y: random input
 * Return: returns x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, --y));
	return (1);
}
