#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number to be modified
 * @index: index of the bit to be set to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index;
	*n = *n | mask;

	return (1);
}

