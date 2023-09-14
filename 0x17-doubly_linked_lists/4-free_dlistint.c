#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		exit;
	if (head == NULL)
		exit;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
