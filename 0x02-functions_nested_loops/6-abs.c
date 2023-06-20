#include "main.h"

/**
 * _abs - function return the absolute value of num
 * @n: Is number to make it abs.
 */

int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return n * (-1);
	}
	else
	{
		return (n);
	}
}
