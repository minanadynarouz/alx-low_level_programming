#include "main.h"

/**
 */

char *create_array(unsigned int size, char c)
{
	if (size <= 0)
	{
		return (NULL);
	}

	char *arr;

	int i;
	arr = (char *)malloc(sizeof(char) * size);

	for(i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
