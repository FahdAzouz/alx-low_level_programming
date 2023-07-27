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
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (*head->next)
	{
		*head = *head->next;
	}
	*head->next = new;
	new->len = strlen(str);
	new->next = NULL;
	return (new);
}
