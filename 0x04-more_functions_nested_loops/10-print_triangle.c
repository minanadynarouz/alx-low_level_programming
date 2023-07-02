#include "main.h"

/**
 * print_triangle - print triangle using #.
 * @size: The number of times to print triangle.
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, l;

		for (i = size - 1; i >= 0; i--)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			for (l = size; l > i; l--)
			{
				_putchar('#');
			}

			_putchar('\n');

		}
	}
}
