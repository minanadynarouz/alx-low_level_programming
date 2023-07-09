#include "main.h"

/**
 * _strstr - locates a character in a string
 * @haystack: string to be checked
 * @needle: characters to search for
 * Return: pointer from the first occurrance of the char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
