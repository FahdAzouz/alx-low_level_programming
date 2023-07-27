#include "lists.h"

/**
 * _strlen - calculate lenght of strings
 *
 * @s: source string arg
 *
 * Return: size of string arg char*
 */

int _strlen(const char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;

	return (size);
}
/**
 * add_node_end - function that adds a new node at the end of a
 * list_t list.
 * @head: head of linked list
 * @str: str of new node
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
			free(new);
			return (NULL);
	}
	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
