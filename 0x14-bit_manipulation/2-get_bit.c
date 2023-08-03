#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index * @n: number to be checked
 * @index: index of the bit to be returned
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int mask = 1;

    if (index > 63)
        return (-1);
    mask <<= index;
    if ((n & mask) == 0)
        return (0);
    else
        return (1);
}