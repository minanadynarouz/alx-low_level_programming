#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: 
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1, num = 0, index = 0, i;

	for (i = 0; i < s[i] != '\0'; i++)
	{
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			if (s[i - 1] == '-')
			{
				sign = -1;
				index = 1;
			}
		}
	}

	while (s[index] != '\0')
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			num = num * 10 + s[index] - '0';
		}

		index++;
	}

	num = num * sign;

	return (num);
}
