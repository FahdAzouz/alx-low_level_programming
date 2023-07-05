#include "main.h"

int isit_pal(char *s, int i, int len);
int _strl_recursion(char *r);
/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (isit_pal(s, 0, _strl_recursion(s)));
}

/**
 * _strl_recursion - returns the length of a string
 * @r: string to calculate the length of
 * Return: length of the string
 */
int _strl_recursion(char *r)
{
	if (*r == '\0')
	{
		return (0);
	}
	return (1 + _strl_recursion(r + 1));
}

/**
 * isit_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int isit_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (isit_pal(s, i + 1, len - 1));
}
