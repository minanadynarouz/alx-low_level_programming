#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers.
 * @seeparator: string between numbers.
 * @n: count of unnamed args.
 * @...: ellipsis.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator && i < n - 1)
		{
			printf("%s ", separator);
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}
