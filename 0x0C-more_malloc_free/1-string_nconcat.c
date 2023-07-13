#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to concatenate
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    unsigned int i, j, len1 = 0, len2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;
    if (n >= len2)
        n = len2;
    ptr = malloc(sizeof(char) * (len1 + n + 1));
    if (ptr == NULL)
        return (NULL);
    for (i = 0 ; i < len1 ; i++)
        ptr[i] = s1[i];
    for (j = 0 ; j < n ; j++)
        ptr[i + j] = s2[j];
    ptr[i + j] = '\0';
    return (ptr);
}