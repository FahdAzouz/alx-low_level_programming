#include "main.h"

int act_prime(int n, int i);
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (act_prime(n, n - 1));
}

/**
 * act_prime - calculates if a number is prime recursively
 * @n: number
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int act_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (act_prime(n, i - 1));
}

