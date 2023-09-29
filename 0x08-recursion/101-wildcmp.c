#include "main.h"

/**
 * wildcmp_rec - functions to check if both strings are same
 * @s1: first string
 * @s2: second string
 * @c1: index for first string
 * @c2: index for second string
 * Return: 1 in case match, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}

