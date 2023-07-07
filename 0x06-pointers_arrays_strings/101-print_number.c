#include "main.h"

/**
 * print_number - function to print number provided
 * @n: variable to be printed
 */

void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	while (num / 10 != 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
