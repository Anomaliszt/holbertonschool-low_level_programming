#include "lists.h"

/**
* list_len - return number of elements in linked list
* @h: pointer to head
*
* Return: Num of nodes
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->str != NULL)
			len++;
		h = h->next;
	}
	return (len);
}
