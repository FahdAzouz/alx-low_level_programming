#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: linked list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL)
		return (NULL);

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

