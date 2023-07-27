#include "lists.h"
/**
 * print_list - function that all elements of a list_t
 * @h: head of linked
 * Return: the number of nodes
 */

size_t	print_list(const list_t *h)
{
	int nu = 0;

	while (h != NULL)
	{
		if (str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nu++;
	}
	return (nu);
}
