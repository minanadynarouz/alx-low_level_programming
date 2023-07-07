#include "main.h"

/**
 * cap_string - Capitalize all words in string.
 * @c: string to be capitalized.
 * Return: capitalized char*
 */

char *cap_string(char *c)
{
	int i, j;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; delimeters[j] != '\0'; j++)
			if (c[i - 1] == delimeters[j])
			{
				if (c[i] >= 'a' && c[i] <= 'z')
				{
					c[i] -= 32;
				}
			}
	}
	return (c);
}
