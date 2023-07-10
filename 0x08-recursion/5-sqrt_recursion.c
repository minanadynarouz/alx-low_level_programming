#include "main.h"

/**
 * _sqrt - calculate natural square root of a number
 * @n: number to be checked
 * @sub: subtracting odd numbers starting from 1
 * @count: represent the square root
 * Return: square root of a number n
 */

int _sqrt(int n, int sub, int count)
{
	if (n < 0)
	{
		return (count - 1);
	}

	return (_sqrt(n - sub, sub + 2, count + 1));
}

/**
 * _sqrt_recursion - implementing sqrt method
 * @n: number to be checked
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1, 0));
}
