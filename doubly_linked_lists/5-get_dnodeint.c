#include "lists.h"

/**
* get_dnodeint_at_index - Locate a node in list
* @head: head of list
* @index: node to locate
* Return: address of head or NULL.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
