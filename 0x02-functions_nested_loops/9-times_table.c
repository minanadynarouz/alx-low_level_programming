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
			if (mult <= 9)
			{
				putchar(mult + '0');
				if (j == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
			else
			{
				putchar(mult / 10 + '0');
				putchar(mult % 10 + '0');
				if (j == 9)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
