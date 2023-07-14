#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest possible number
* @max: lagrest possible number
* Return: pointer to the address of the memory
*/

int *array_range(int min, int max)
{
	int i, j;
	int *block;

	if (min > max)
	{
		return (NULL);
	}

	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (i = min, j = 0; i < max; i++, j++)
		{
			block[j] = i;
		}
		return (block);
	}
	else
	{
		return (NULL);
	}
}
