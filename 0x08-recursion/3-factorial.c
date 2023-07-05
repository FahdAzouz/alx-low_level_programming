#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number
 *
 * Return: -1 for error, else return factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	int r;

	r = n * factorial(n - 1);
	return (r);
}
