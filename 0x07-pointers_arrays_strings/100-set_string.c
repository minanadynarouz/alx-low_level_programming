#include "main.h"

/**
 * set_string - set value of a pointer to a char
 * @s: Double pointer to recieve
 * @to: Pointer to give
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
