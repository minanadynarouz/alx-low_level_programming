#include "main.h"

/**
 * _strcpy - function copy string from one pointer to another
 * @dest: pointer to recieve string copy.
 * @src: pointer that hold original string copy.
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
