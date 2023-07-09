#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to search for
 * Return: pointer to first occurrance of the char
 */

char *_strchr(char *s, char c)
{
	int i;
	char *f;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f = s + i;
			break;
		}
	}

	return (f);
}
