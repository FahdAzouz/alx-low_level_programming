#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string where
 * @needle: string what
 *
 * Return: pointer of substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *k = needle;

		while (*l == *k && *k != '\0')
		{
			l++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}

	return (0);
}
