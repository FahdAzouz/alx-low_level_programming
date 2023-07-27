#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a
 * list_t list.
 * @head: head of linked list
 * @str: str of new node
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	new->len = i;
	new->next = NULL;
	
	return (new);
}
