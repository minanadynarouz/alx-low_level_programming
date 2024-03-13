#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: of ints to search for value for
 * @size: is the size of the array
 * @value: is the value to search for
 * Return: index where value found at otherwise if not found return -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
