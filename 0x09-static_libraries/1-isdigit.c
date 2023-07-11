#include "main.h"

/**
 * _isdigit - check if number is digit or not
 * @c: is the variable to be checked
 * Return: 1 if digit and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
