#include "main.h"

/**
 * rot13 - 
 * @c:
 * Return: char
 */

char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M'))
		{
			c[i] = c[i] + 13;
		}
		else if ((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'Z'))
		{
			c[i] = (c[i] + 13) - 26;
		}
	}
	return (c);
}
