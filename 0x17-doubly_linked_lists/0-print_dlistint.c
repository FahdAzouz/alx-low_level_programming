#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	dlistint_t *head = h;

	if (h == NULL)
		return (0);
	while (head->next != NULL)
	{
		i++;
		print("%d\n", head->n);
		head = head->next;
	}
	return i;
}
