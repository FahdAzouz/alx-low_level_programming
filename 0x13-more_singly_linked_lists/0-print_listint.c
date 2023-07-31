#include "lists.h"

/**
 * print_listint - print list of integers
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		l++;
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (l);
}
