#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
    unsigned long int mask = 1;
    int i = 0;

    mask <<= 63; /* 1 << 63 */

    while (mask > 0)
    {
        if ((n & mask) == 0)
            i++;
        else
            break;
        mask >>= 1; /* divide mask by 2 (right shift) */
    }

    while (mask > 0)
    {
        if ((n & mask) == 0)
            _putchar('0');
        else
            _putchar('1');
        mask >>= 1; /* divide mask by 2 (right shift) */
    }
}