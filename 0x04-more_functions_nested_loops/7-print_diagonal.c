#include "main.h"

/**
 * print_diagonal - print diagonal using space and put \ at the end.
 * @n: The number of times to print diagonal lines.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}

		_putchar('\n');

		}
	}
}
