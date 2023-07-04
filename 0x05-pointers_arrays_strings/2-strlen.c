#include "main.h"

/**
 * _strlen - calculate length of a string
 * @s: variable to be checked
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i, counter = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		counter++;
	}

	return (counter);
}
