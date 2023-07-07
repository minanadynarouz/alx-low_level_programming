#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first string to be checked
 * @s2: second string to be checked
 * Return: 0 true if strings match, 1 if false
 */

int _strcmp(char *s1, char *s2)
{
	int i, counter1 = 0, counter2 = 0, diff_success = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		counter1++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		counter2++;
	}

	for (i = 0; i < counter1 || i < counter2; i++)
	{
		if (s1[i] == s2[i])
		{
			diff_success = 0;
		}
		else
		{
			diff_success++;
			return (s1[i] - s2[i]);
		}
	}

	return (diff_success);
}
