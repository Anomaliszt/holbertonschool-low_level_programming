#include "lists.h"

/**
* insert_dnodeint_at_index - new node in special place
* @h: pointer to pointer to head
* @idx: position for new node
* @n: int for new node
* Return: address of new or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		idx--;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
