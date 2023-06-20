#include "main.h"

/**
 * _isalpha - function Checks if a character is alphapetical or not.
 * @c: Is character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
