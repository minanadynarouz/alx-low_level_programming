#include "main.h"

/**
 * _pow_recursion - raise a number to power of another
 * @x: number to raise it
 * @y: power of the number
 * Return: value of x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
