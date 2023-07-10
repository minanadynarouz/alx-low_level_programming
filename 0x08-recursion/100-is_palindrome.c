#include <string.h>
#include "main.h"

/**
 * is_palindrome_rec - function to check if string palindrome
 * @s: string to be checked
 * @l: left index
 * @r: right index
 * Return: 1 if yes, 0 otherwise
 */

int is_palindrome_rec(char *s, int l, int r)
{
	if (l >= r)
	{
		return (1);
	}

	if (s[l] != s[r])
	{
		return (0);
	}

	return (is_palindrome_rec(s, l + 1, r - 1));
}

/**
 * is_palindrome - function to return int from calling function
 * @s: string to be checked
 * Return: 1 if yes, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_rec(s, 0, len - 1));
}
