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
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			_putchar(mult / 10 + '0');
			_putchar(mult % 10 + '0');
			if (j == 9)
			{
				continue;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
