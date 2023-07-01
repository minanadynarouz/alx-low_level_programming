#include "main.h"

/**
 * _isupper - check if character is uppercase or not
 * @c: is variable to bee checked
 * Return: 1 if upper, 0 if else
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
