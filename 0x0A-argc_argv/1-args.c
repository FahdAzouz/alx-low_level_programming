#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always zero
 */

int main(int argc, char const *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
