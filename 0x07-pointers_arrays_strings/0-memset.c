#include "main.h"

/**
 * _memset - 
 * @s:
 * @b:
 * @n:
 * Return: A pointer 
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
