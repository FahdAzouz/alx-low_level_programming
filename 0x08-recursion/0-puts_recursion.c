#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: string to print
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(s);
		s++;
	}
	else
		_putchar('\n');
}
