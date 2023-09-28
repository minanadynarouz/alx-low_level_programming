#include "main.h"

/**
 * print_binary - prints the binary representation of a num.
 * @n: number to be used.
 */

void print_binary(unsigned long int n)
{
	int i, valid = 0;
	unsigned long int index;

	for (i = 63; i >= 0; i--)
	{
		index = n >> i;
		if (index & 1)
		{
			_putchar('1');
			valid = 1;
		}
		else if (valid)
		{
			_putchar('0');
		}
	}

	if (!valid)
	{
		_putchar('0');
	}
}
