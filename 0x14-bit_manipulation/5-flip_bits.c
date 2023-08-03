#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int mask = 1;
    unsigned int count = 0;

    mask <<= 63;
    while (mask > 0)
    {
        if ((n & mask) != (m & mask))
            count++;
        mask >>= 1;
    }
    return (count);
}