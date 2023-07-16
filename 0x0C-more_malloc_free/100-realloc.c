#include "main.h"

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated using malloc
* @old_size: size of ptr
* @new_size: size of the new memory
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	void *newPtr;

	if (old_size == new_size)
	{
		return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return malloc(new_size);
	}
	
	if (ptr != NULL)
	{
		newPtr = realloc(ptr, new_size);
		if (newPtr == NULL)
		{
			return (NULL);
		}
		newPtr = ptr;
		return (newPtr);
	}
}
