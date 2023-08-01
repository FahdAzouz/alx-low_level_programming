#include "lists.h"

/**
 * add_nodeint_end - function that adds node to end of linked list
 * @head: linked list
 * @n: integer
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	new->n = n;
	new->next = NULL;
	temp->next = new;
	return (*head);
}

