#include "main.h"

/**
 * check_prime - int is prime or not
 * @n: random value
 * @x:x times
 * Return: 1 if prime or 0 if not
 */
int check_prime(int n, int x)
{
	if (n <= 1)
		return (0);
	else if (n % x == 0 && x > 1)
		return (0);
	else if ((n / x) < x)
		return (1);

	return (check_prime(n, x + 1));
}
/**
 * is_prime_number - Returns if a number is prime
 * @n: the number to be checked
 * Return: value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
