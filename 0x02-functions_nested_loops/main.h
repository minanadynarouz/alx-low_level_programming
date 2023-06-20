#include <stdio.h>

/**
 * Header File
 *
 * Include standard i/o header files
 * Include function that putchar a word
 */

void _putchar (const char *word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		putchar(word[i]);
		i++;
	}
	putchar('\n');
}



