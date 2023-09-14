#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head
 * @n: int of new node
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp = *head;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	node->prev = tmp;
	if (tmp)
		tmp->next = node;

	return (node);
}
