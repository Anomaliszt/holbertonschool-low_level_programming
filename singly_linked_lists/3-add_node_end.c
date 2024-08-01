#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - add node end
* @head: pointer to head
* @str: string
* Return: address of new node  or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	char *x;
	list_t *new, *last;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	x = strdup(str);
	if (x == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = x;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
		last = last->next;
		last->next = new;
	}
	return (*head);
}
