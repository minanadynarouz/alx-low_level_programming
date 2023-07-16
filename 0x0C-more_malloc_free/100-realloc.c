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
	void *newPtr;

	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		return (newPtr);
	}
	else if (old_size == new_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		if (ptr != NULL)
		{
			newPtr = realloc(ptr, new_size);
			if (newPtr == NULL)
			{
				return (NULL);
			}
			return (newPtr);
		}
		return (NULL);
	}
}
