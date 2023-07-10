#include "main.h"

/**
 * factorial - provide factorial of a given number
 * @n: number to be checked
 * Return: return the factorial number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
