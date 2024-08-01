#include "lists.h"

/**
* dlistint_len - Return  number of elements in list
* @h: pointer
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
