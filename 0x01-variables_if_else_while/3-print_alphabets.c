#include <stdio.h>

/**
 * main - Prints the alphabet in both lower then upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	/* ASCII values for uppercase letters range from 65 to 90 */
	for (i = 65; i <= 90; i++)
	{
		/* Use putchar to output the character */
		putchar(i);
		/* Print a space between characters */
	}
	/* Print a newline at the end */
	putchar('\n');
	return (0);
}
