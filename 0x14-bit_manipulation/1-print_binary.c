#include "main.h"

/**
 * print_binary - prints the binary representation of a num.
 * @n: number to be used.
 */

void print_binary(unsigned long int n)
{
	int i, count;
	unsigned long int index;

	for (i = 63; i >= 0; i--)
	{
		index = n >> i;
		if (index == 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (count == 0)
	{
		_putchar('0');
	}
}
