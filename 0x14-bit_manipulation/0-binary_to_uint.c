#include "main.h"


/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    int i = 0;

    if (b == NULL)
        return (0);

    while (b[i] != '\0')
    {
        if (b[i] != '0' && b[i] != '1') /* if b[i] is not 0 or 1 */
            return (0);
        num <<= 1; /* multiply num by 2 (left shift) */
        if (b[i] == '1') /* if b[i] is 1 */
            num ^= 1; /* set the last bit of num to 1 (XOR) */
        i++;
    }

    return (num);
}
