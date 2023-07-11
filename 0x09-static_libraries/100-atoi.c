#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: 
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
	{

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + s[i] - '0';

			if (s[i - 1] == '-')
			{
				sign = -1;
			}
		}
	}

	return sign * num;
}
