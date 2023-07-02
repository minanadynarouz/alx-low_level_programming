#include <main.h>

/**
 * print_numbers: print any integer provided to function.
 * @n: is parameter to be checked.
 */

void print_number(int n)
{
	int neg = 0;
	int i = 0;
	int digits[10];

	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}

	do
	{
		digits[i++] = n % 10;
		n /= 10;
	} while (n != 0);

	if (neg == 1)
	{
		putchar('-');
	}

	while (i > 0)
	{
		putchar(digits[--i] + '0');
	}

	putchar('\n');
}
