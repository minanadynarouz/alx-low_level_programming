#include "main.h"

/**
 * _strpbrk - locates a character in a string
 * @s: string to be checked
 * @accept: characters to search for
 * Return: pointer from the first occurrance of the char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (s);
}
