#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: linked list
 * @index: index of the node
 * Return: nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *temp;
    unsigned int i;

    if (head == NULL)
        return (NULL);

    temp = head;
    for (i = 0; i < index; i++)
    {
        if (temp->next == NULL)
            return (NULL);
        temp = temp->next;
    }
    return (temp);
}