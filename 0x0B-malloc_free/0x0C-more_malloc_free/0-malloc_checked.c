#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: assigned pointer
 * Return: void pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *newAlloc;
	newAlloc = malloc(b);

	if (newAlloc == NULL)
	{
		exit(98);
	}
	return (newAlloc);
}
