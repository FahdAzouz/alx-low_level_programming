#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, v, n, s;

	j = 1;
	v = 2;
	s = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			s = s + j;
		}
		n = j + v;
		j = v;
		v = n;
	}

	printf("%lu\n", s);
	return (0);
}
