#include "main.h"

/**
 * _isalpha - function Checks if a character is alphapetical or not.
 * @c: Is character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
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
