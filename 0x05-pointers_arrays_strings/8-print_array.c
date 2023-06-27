#include "main.h"

/*
 * print_array - function that prints n elements of an array of
 * integers, followed by a new line.
 *
 * @a: Array to print
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < (n - 1) ; i++)
	{
		if (a[i] != '\0')
		{
			printf("%d, ", a[i]);
		}
		else
			break;
	}
	if (i == (n - 1))
	{
		printf("%d", a[i]);
	}
		printf("\n");
}
