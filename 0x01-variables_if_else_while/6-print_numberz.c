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
	for (int num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
