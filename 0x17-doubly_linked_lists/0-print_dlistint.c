#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *head = h;

	if (!h)
		return (0);

	while (head != NULL)
	{
		i++;
		print("%d\n", head->n);
		head = head->next;
	}
	return i;
}
