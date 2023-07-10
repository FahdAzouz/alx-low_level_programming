#include "main.h"
#include <stdlib.h>

/**
 * strtow - function that splits a string into words.
 *
 * @str: string to split
 * Return: char**
 */

char **strtow(char *str)
{
	char **array;
	int i, j, k, len = 0, words = 0, start = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[len] != '\0')
		len++;
	array = malloc(sizeof(char *) * len);
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < len ; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			array[words] = malloc(sizeof(char) * (i - start + 2));
			if (array[words] == NULL)
			{
				for (j = 0 ; j < words ; j++)
					free(array[j]);
				free(array);
				return (NULL);
			}
			for (k = 0 ; k < (i - start + 1) ; k++)
				array[words][k] = str[start + k];
			array[words][k] = '\0';
			words++;
			start = i + 1;
		}
	}
	array[words] = NULL;
	return (array);
}
