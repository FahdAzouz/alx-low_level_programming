#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int a, b, r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	r = a * b;
	printf("%d\n", r);
	return (0);
}
