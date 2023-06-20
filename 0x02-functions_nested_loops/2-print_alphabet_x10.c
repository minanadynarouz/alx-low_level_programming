#include "main.h"

/**
 * print_alphabet_x10 - Print all alphabets in lowercase
 * but 10 times
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
