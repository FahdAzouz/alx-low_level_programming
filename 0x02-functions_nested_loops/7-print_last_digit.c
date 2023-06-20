#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @d: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int d)
{
	if (d < 0)
		d = -d;
	return (d % 10);
}
