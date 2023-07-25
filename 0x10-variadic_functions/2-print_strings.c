#include "variadic_functions.h"

/**
 * print_strings - function that prints strings.
 * @separator: string between numbers.
 * @n: count of unnamed args.
 * @...: ellipsis.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
