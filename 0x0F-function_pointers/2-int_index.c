#include "function_pointers.h"

/**
 * int_index - function to get index of found int.
 * @array: array to iterate over.
 * @size: size of array.
 * @cmp: pointer to function we will use.
 * Return: index where element found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
	}
	return (-1);
}
