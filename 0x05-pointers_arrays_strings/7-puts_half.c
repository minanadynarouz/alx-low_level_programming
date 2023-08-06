#include "main.h"

/**
 * puts_half - function to put second half of give string
 * @str: given string to be checked
 */

void puts_half(char *str)
{
	int i, half_len = 0, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		half_len = len / 2;

		for (i = half_len; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		half_len = (len - 1) / 2;

		for (i = half_len; i < len; i++)
		{
			putchar(str[i]);
		}
	}

	putchar('\n');
}
