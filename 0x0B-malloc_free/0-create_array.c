#include "main.h"

/**
 * create_array - function to create array in heap
 * @size: size var to be created
 * @c: character to be inserted in new array
 * Return: Pointer to first element of array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
