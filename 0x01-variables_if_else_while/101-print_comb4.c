#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, x;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (x = j + 1; x <= '9'; x++)
			{
				if (i != j && i != x && j != x)
				{
					putchar(i);
					putchar(j);
					putchar(x);
				}
				if (i == '7' && j == '8' && x == '9')
				{
					continue;
				}
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
