#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer
 * @b: constant
 * @n: n bytes to fill
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > i ; i++)
	{
		s[i] = b;
	}
	return (s);
}
