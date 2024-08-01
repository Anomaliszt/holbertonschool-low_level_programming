#include "lists.h"

/**
* add_node - add new node beginning
* @head: pointer to head
* @str: string
* Return: address of new node  or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	char *x;
	int len = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	x = strdup(str);
	if (x == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->str = x;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
