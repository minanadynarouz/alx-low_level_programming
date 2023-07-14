#include "main.h"

/**
* _calloc - allocates memory by malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block
*Return: poiner to the address of the memory block
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, x = nmemb * size;
	char *block;

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
