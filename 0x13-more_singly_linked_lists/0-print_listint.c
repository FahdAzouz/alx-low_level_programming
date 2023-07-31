#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	count = 0 ;
	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (count);
}
