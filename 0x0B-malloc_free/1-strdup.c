#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * 
 * @str: string to copy 
 * @Return: char
 */
char *_strdup(char *str)
{
	if(str == NULL)
		return (NULL);
    
	char *copy;
	int i, len = 0;
	
	while(str[len] != '\0')
		len++;
	copy = malloc(sizeof(char) * len);
	if(copy == NULL)
		return (NULL);
	for (i = 0 ; i < len ; i++)
		copy[i] = str[i];
	return (copy);
}
