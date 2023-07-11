#include "main.h"

/**
 * str_concat - function concatenate s2 to s1
 * @s1: first var to receive second
 * @s2: second var to be concatenated to s1
 * Return: pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, len_1, len_2;
	int index_counter;

	if (s1 == NULL || s1 == NULL)
	{
		return (NULL);
	}

	for (i = 0, len_1 = 0; s1[i]; i++)
	{
		len_1++;
	}

	for (i = 0, len_2 = 0; s2[i]; i++)
	{
		len_2++;
	}

	arr = (char *)malloc(sizeof(char) * len_1 + len_2 + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	index_counter = 0;
	
	for (i = 0; s1[i]; i++)
	{

		arr[index_counter++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		arr[index_counter++] = s2[i];
	}
	
	return (arr);
}
