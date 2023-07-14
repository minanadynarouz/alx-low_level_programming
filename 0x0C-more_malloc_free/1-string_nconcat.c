#include "main.h"

/**
 * string_nconcat - concatenate strings based on size n
 * @s1: first string
 * @s2: second string
 * @n: size of bytes to be copies form s2 to s1.
 * Return: char pointer with new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	unsigned int len_s1 = 0;

	char *newStr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	
	newStr = malloc(sizeof(char) * (len_s1 + n + 1));
	if (newStr != NULL)
	{
		for (i = 0, j = 0; i < len_s1; i++, j++)
		{
			newStr[i] = s1[i];
		}

		for (k = 0; k < n; j++, k++)
		{
			newStr[j] = s2[k];
		}
		newStr[j] = '\0';
		return (newStr);
	}
	else
	{
		return (NULL);
	}
}
