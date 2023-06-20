#include "main.h"

/**
 * _abs - function return the absolute value of num
 * @n: Is number to make it abs.
 * return 0 if n equal to zero, absolute value if n < 0, return number as it is otherwise
 */

int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (n * (-1);
	}
	else
	{
		return (n);
	}
}
