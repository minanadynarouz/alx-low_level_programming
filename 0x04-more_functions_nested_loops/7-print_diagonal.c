#include "main.h"

/**
 * print_diagonal - print diagonal using space and \
 * @n: variable to be used for the size of the diagonal
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

		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('\\');
			}

		_putchar('\n');

		}
	}
}
