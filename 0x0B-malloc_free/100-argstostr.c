#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: argument count
 * @av: argument vector
 * Return: char*
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			len++;
	}
	concat = malloc((sizeof(char) * len) + ac + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		concat[k] = '\n';
		k++;
	}
	return (concat);
}
