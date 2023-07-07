#include "main.h"

/**
 * string_toupper - convert string to uppercase.
 * @c: string to be converted.
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
	}

	return (c);
}
