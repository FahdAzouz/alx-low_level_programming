#include "search_algos.h"
/**
 * linear_search-function that searches for a value in an array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: index of value or -1 in case of failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i ; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
