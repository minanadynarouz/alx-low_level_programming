#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to search for
 * Return: pointer to first occurrance of the char
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
