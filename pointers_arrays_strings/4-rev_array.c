#include "main.h"

/**
 * reverse_array - a function reverse
 * @a: rand
 * @n: rand
 * Return: Nada
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
