#include "lists.h"

/**
* print_dlistint - Prints list
* @h: pointer
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
