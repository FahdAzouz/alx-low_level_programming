#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: linked list
 * Return: number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp = *h, *temp2;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		count++;
		if (temp2 >= temp)
			break;
		temp = temp2;
	}

	*h = NULL;

	return (count);
}

