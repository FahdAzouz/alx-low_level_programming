#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: first part of string
 * @src: last part of string
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
