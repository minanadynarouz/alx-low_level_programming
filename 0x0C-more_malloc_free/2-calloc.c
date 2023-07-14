#include "main.h"

/**
*_calloc - allocate memory using malloc
*@nmemb: array to allocate memory for
*@size: size to be allocated
*@n: The maximum number of bytes of s2 to concatenate to s1.
*Return: If the function fails - NULL.
*Otherwise - a pointer to the allocated space in memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, x = nmemb * size;
	void *block;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	block = malloc(x);
	
	if (block != NULL)
	{
		for (i = 0; i < x; i++)
		{
			block[i] = 0;
		}
		return (block);
	}
	else
	{
		return (NULL);
	}
}
