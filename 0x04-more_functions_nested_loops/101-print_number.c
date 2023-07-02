#include "main.h"

/**
 * print_numbers: print any integer provided to function.
 * @n: is parameter to be checked.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n *= -1;
	}
	
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
