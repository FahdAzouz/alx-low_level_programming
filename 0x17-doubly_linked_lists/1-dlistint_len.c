#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return 0;
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
