#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root
 * @n: random n
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finds natural square root
 * @n: random number
 * @i: random number
 * Return: same as above
 */
int _sqrt(int n, int i)
{
	int root = i * i;

	if (root > n)
		return (-1);
	else if (root == n)
		return (i);
	return (_sqrt(n, i + 1));
}
