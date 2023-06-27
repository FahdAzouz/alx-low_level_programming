#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: Array to print
 * @n: number of elements to print
 *
 * This function prints the first n elements of an array. It breaks
 * the loop and stops printing as soon as it encounters a null character.
 * It prints the elements separated by a comma and a space.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		if (a[i] != '\0')
		{
			printf("%d, ", a[i]);
		}
		else
		{
			break;
		}
	}
	if (i == n - 1)
	{
		printf("%d", a[i]);
	}

	printf("\n");
}
