#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: head of list
 * Return: 0 if list empty
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	if (head == NULL)
		return (0);

	while (head)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
