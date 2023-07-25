#include "variadic_functions.h"

/**
 * sum_them_all - function calculate sum 
 * of all its args.
 * @n: count of unnamed args.
 * @...: ellipsis
 * Return: sum of all args passed.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int i, sum;

	va_start (nums, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end (nums);
	return (sum);
}
