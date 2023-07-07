#include "main.h"

/**
 * leet - change letters to be encoded.
 * @c: string to be capitalized.
 * Return: changed char*
 */

char *leet(char *c)
{
	int i, j;
	char chars[] = "ol_ea__t";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; chars[j] != '\0'; j++)
			if (c[i] == chars[j] || c[i] == (chars[j] - 32))
			{
				c[i] = j + '0';
			}
	}
	return (c);
}
