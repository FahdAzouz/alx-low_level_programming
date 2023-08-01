#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 * listint_t linked list
 * @head: linked list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);

	return (1);
}

