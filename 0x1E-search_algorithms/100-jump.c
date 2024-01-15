#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * 
 * Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
    int prev = 0, step = sqrt(size), i = 0;

    if (array == NULL)
        return (-1);
    
    while (array[prev] < value && prev < (int)size)
    {
        printf ("Value checked array[%d] = [%d]\n", prev, array[prev]);
        prev += step;
        if (prev >= (int)size)
            break;
    }
    printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);

    for (i = prev - step; i <= prev; i++)
    {
        if (i < (int)size)
        {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
            if (array[i] == value)
                return (i);
        }
    }
    return (-1);
}