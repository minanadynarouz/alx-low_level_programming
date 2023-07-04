#include "main.h"

/**
 * rev_string - function that reverse a string.
 * @s: string var to be reversed.
 */

void rev_string(char *s)
{
	int i, j, temp, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	
	for (i = 0, j = counter - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

	putchar('\n');
}
