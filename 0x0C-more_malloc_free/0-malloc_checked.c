#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit 98 if fails
 * @b: assigned pointer
 * Return: void pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
