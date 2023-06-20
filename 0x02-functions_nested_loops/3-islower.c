#include "main.h"

/**
 * _islower - Check if char is lower char or not
 * char c is parameter for the function that represent the character to be checked
 * return 1 if true and return 0 if false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
