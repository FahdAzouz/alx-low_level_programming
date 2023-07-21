#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, then adds a new line afterward.
 * @separator: The string between strings that will be printed.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If the separator is NULL, then it is not printed.
 * Return: --
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	char *s;
	va_list args;


	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		s = va_arg(args, char *);
		printf("%s%s",
			   s == NULL ? "(nil)" : s,
			   i != (int)n - 1 && separator != NULL ? separator : "");
	}

	va_end(args);
	printf("\n");
}
