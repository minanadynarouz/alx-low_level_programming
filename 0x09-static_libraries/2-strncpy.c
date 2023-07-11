#include "main.h"

/**
 * _strncpy - copy chars from src to dest
 * @dest: destination var will recieve string
 * @src: source var to send string
 * @n: max count of chars to be sent
 * Return: char pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
