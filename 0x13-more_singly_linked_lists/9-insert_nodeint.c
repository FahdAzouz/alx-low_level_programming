#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position
 * @head: linked list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new = (listint_t *)malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}

