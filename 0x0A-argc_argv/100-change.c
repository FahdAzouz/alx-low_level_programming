#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: character
 * @argv: character
 *
 * Description: -
 * Return: -
 */
int main(int argc, char *argv[])
{
	int c;
	int total = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < (int)strlen(argv[1]); i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	c = atoi(argv[1]);
	while (c > 0)
	{
		i = 0;
		while (i < 5)
		{
			if (coins[i] <= c)
			{
				c -= coins[i];
				total++;
				break;
			}
			i++;
		}
	}
	printf("%d\n", total);
	return (0);
}
