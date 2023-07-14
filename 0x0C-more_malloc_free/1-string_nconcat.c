#include "main.h"

/**
*string_nconcat - Concatenates two strings using
*inputed number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, i, j, k;
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
