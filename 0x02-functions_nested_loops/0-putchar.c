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
	const char *word = "_putchar";
	int i = 0;
	while (word[i] != '\0')
	{
		putchar(word[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
