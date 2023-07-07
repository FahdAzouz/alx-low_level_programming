#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always zero
 */

int main(int argc, int const *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
