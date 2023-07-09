#include "main.h"

/**
 * _strstr - locates a character in a string
 * @shaystack: string to be checked
 * @needle: characters to search for
 * Return: pointer from the first occurrance of the char
 */

char *_strstr(char *haystack, char *needle)
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
	return (0);
}
