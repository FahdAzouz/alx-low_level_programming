#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * return: void.
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = '0' ; j < '15' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
