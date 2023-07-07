#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @c: string to be converted
 */

char *string_toupper(char *c)
{
	int i;
	char *upper_c;

	upper_c = (char *)malloc(sizeof(char) * (sizeof(c)));

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			*(upper_c + i) = c[i] - 32;
		}
		else
		{
			*(upper_c + i) = c[i];
		}
	}

	upper_c[i] = '\0';

	return (upper_c);
}
