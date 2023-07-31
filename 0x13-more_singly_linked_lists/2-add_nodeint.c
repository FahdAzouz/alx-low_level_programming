#include "lists.h"

/**
 * add_nodeint - function that adds node to beginning of linked list
 * @head: linked list
 * @n: integer
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    if (head == NULL)
        return (NULL);

    new = (listint_t *)malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = *head;
    *head = new;
    return (*head);
}