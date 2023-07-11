#include "main.h"

/**
 * _strdup - function to create array to store a string copy
 * @str: size var to copied
 * Return: Pointer to first element of array
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	arr = (char *)malloc(sizeof(char) * sizeof(str));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
