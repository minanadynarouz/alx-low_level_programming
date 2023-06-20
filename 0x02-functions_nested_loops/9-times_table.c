#include "main.h"

/**
 * jack_bauer - function print every mins of jack day
 * Return: No return
 */

void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			mult = i * j;

			if (mult <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((mult / 10) + '0');
			}
			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
