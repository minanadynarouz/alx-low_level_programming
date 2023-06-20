#include "main.h"

/**
 * jack_bauer - function print every mins of jack day
 * Return: No return
 */

void jack_bauer(void)
{
	int i, j;
	
	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(':');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar('\n');
		}
	}
}
