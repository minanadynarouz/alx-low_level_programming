#include "main.h"

/**
 * _strncat - function concatenate two strings together
 * @dest: is string to recieve another one
 * @src: is string to be sent to another.
 * @n: var to be checked to decide how many char to be concatenated
 * Return: the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, counter_src = 0, counter_dest = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		counter_src++;
	}

	for (i = 0; dest[i] != '\0'; i++)
	{
		counter_dest++;
	}

	for (i = counter_dest; i < counter_dest + counter_src; i++)
	{
		*(dest + i) = *(src + i - counter_dest);
	}

	dest[counter_dest + counter_src] = '\0';

	return (dest);
}
