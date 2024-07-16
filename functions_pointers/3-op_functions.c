#include "3-calc.h"

/**
* op_add - sum of ints
* @a: first int
* @b: second int
* Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - difference of ints
* @a: first int
* @b: second int
* Return: difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - product on ints
* @a: first int
* @b: second int
* Return: product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division of ints
* @a: first int
* @b: second int
* Return: division
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - remainder of ints
* @a: first int
* @b: second int
* Return: remainder
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}



