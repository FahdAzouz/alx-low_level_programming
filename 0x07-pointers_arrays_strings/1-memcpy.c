#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: memory area
 * @src: memory area source
 * @n: n bytes
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
