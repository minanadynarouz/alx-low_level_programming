#include "main.h"

/**
 * wildcmp_rec - functions to check if both strings are same
 * @s1: first string
 * @s2: second string
 * @c1: index for first string
 * @c2: index for second string
 * Return: 1 in case match, 0 otherwise
 */

int wildcmp_rec(char *s1, char *s2, int c1, int c2)
{
	if (s1[c1] == '\0' && s2[c2] == '\0')
	{
		return (1);
	}

	if (s2[c2] == '*')
	{
		return (wildcmp_rec(s1, s2, c1, c2 + 1) || wildcmp_rec(s1, s2, c1 + 1, c2));
	}
	if (s1[c1] == s2[c2] || s2[c2] == '?')
	{
		return (wildcmp_rec(s1, s2, c1 + 1, c2 + 1));
	}

	return (0);
}

/**
 * wildcmp - functions to run the above function
 * @s1: first string
 * @s2: second string
 * Return: 1 in case match, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_rec(s1, s2, 0, 0));
}
