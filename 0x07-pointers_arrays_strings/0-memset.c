#include "main.h"

/**
 * _memset - function to fill bytes 
 * @s: pointer pointing to memory space
 * @b: var holding value will be used in memory space
 * @n: size of area to be filled
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
