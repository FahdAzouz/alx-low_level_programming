#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: index of the node
 * Return: Null if does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	if (!head)
		return (NULL);

	if (head == NULL)
		return (NULL);

	while (i != index)
	{
		node = node->next;
		i++;
	}

	return (node ? head : NULL);
}
