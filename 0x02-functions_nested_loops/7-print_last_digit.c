#include "main.h"

/**
 * print_last_digit - function return last digit of a num
 * @n: Is number to make it abs.
 * Return: last digit of num 
 */

int print_last_digit(int n)
{
	int l_digit = n % 10;

	if (l_digit < 0)
	{
		l_digit *= -1;
	}
	_putchar(l_digit + '0');

	return (l_digit);
}
