#include "lists.h"

/**
 * listint_len - return number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
    size_t l = 0;

    while (h != NULL)
    {
        l++;
        if (h->next == NULL)
            break;
        h = h->next;
    }

    return (l);
}
