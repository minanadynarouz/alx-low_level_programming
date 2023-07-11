#include "main.h"

/**
 * _strdup - function to create array to store a string copy
 * @str: size var to copied
 * Return: Pointer to first element of array
 */

char *_strdup(char *str)
{
	char *arr;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0, len = 0; str[i]; i++)
	{
		len++;
	}

	arr = (char *)malloc(sizeof(char) * len + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
