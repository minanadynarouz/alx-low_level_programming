#include "function_pointers.h"

/**
 * array_iterator - function that iterate over elements.
 * @array: array to iterate over.
 * @size: size of array.
 * @action: pointer to function we will use.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
