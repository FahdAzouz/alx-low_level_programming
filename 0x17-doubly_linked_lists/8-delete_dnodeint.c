#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: double pointer to the list
 * @idex: index of the node to insert
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return -1;

	current = *head;

	if (index == 0) {
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return 1;
	}

	for (i = 0; current != NULL && i < index; i++) {
		current = current->next;
	}

	if (current == NULL)
		return -1;

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);
	return 1;
}
