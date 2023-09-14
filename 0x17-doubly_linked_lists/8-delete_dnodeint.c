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
	if (*head == NULL || index < 0)
	       	return -1;

	dlistint_t *current = *head;

	/* If index is 0, remove the head node */
	if (index == 0) {
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return 1;
	}

	unsigned int i;
	for (i = 0; i < index && current != NULL; i++) {
		current = current->next;
	}

	/* If current is NULL, the index is out of range */
	if (current == NULL)
		return -1;

	/* Adjust pointers to skip the node at the given index */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return 1;
}
