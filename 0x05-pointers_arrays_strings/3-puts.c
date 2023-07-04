#include "main.h"

/**
 * _puts - Function print string to stdout.
 * @str: variable parameter to be printed to stdout.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
