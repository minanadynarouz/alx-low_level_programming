#include "main.h"

/**
 * _strlen_recursion - get length of a string
 * @s: string to get its length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count;
	count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
