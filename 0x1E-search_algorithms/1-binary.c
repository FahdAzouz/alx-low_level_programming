#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
    int i, left, right, middle;

    if (array == NULL)
        return (-1);

    left = 0;
    right = (int)size - 1;

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            if (i == right)
                printf("%d\n", array[i]);
            else
                printf("%d, ", array[i]);
        }
        middle = (left + right) / 2;
        if (value == array[middle])
            return (middle);
        else if (value < array[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }
    return (-1);
}