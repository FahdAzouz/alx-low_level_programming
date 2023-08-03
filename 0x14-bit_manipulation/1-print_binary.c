#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int flag = 0;

	mask <<= 63;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			flag = 1;
		}
		mask >>= 1;
	}
}

