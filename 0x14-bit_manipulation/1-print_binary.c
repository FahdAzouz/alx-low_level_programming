#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
/**
 * print_binary - print binary representation of a number
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shifts;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (tmp = n, shifts = 0; (tmp >>= 1) > 0; shifts++)
		;

	while (shifts >= 0)
	{
		if ((n >> shifts) & 1)
			_putchar('1');
		else
			_putchar('0');
		shifts--;
	}
}