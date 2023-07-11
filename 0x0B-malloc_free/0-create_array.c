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
	arr = (char *)malloc(sizeof(char) * size);
	
	int i;

	for(i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
