#include "lists.h"

/**
 * free_list - free memory
 * @head: linked list
 * Return: nothing
 */

void  free_list(list_t *head)
{
	list_t *tmp = 0;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
