#include "lists.h"

/**
* print_list - function that prints elements of a list
* @h: lists
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		len++;
		h = h->next;
	}

	return (len);
}
