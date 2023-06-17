#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (char a = 'a'; a >= 'z'; a--)
	{
		putchar(a);
		putchar('\n');
	}
	return (0);
}
