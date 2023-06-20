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
		putchar('0');

		for (j = 1; j <= 9; j++)
		{
			putchar(',');
			putchar(' ');

			mult = i * j;

			if (mult <= 9)
			{
				putchar(' ');
			}
			else
			{
				putchar((mult / 10) + '0');
			}
			putchar((mult % 10) + '0');
		}
		putchar('\n');
	}
}
