#include "lists.h"
/**
 * list_len - num of elements
 * @h: head
 * Return: numbers of elements in list_t
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
