#include "main.h"
#include <stdio.h>

/**
 * create_array -  function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: char to fill array
 * Return: char*
 */

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
        return (NULL);

    array = malloc(sizeof(char) * size);

    if (array == NULL)
        return (NULL);

    array[0] = c;

    return (array);
}