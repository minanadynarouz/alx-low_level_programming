#include "main.h"

/**
 * print_sign - function Checks sign of num if positive or negative or zero
 * @n: Is number to be checked.
 *
 * Return: 1 if number is positive, 0 if zero and -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
