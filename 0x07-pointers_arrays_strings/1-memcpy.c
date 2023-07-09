#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination area to recieve the data.
 * @src: thee source of data.
 * @n: bytes to be copied.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
