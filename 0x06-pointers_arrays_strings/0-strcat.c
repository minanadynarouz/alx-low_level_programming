#include "main.h"

/**
 * _strcat - function concatenate two strings together
 * @dest: is string to recieve another one
 * @src: is string to bee sent to another.
 * Return: the new string
 */

char *_strcat(char *dest, char *src)
{
	int i, counter_src = 0, counter_dest = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		counter_src++;
	}

	for (i = 0; dest[i] != '\0'; i++)
	{
		counter_dest++;
	}

	for (i = counter_dest; i < counter_dest + counter_src; i++)
	{
		*(dest + i) = *(src + i - counter_dest); // copy the rest
	}

	dest[counter_dest + counter_src] = '\0';

	return (dest);
}
