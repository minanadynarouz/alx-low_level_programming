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

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
		}
	}
	return (0);
}
