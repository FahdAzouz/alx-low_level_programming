#include "lists.h"
/**
 * list_len - num of elements
 * @h: head
 * Return: numbers of elements in list_t
 */
size_t list_len(const list_t *h)
{
int num = 0;

while (h)
{
num++;
h = h->next;
}
return (num);
}
