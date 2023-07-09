#include "main.h"

/*
 * set_string - to copy from pointer to double pointer
 * @s: double pointer to assign new value for
 * @to: pointer to send data
 */

void set_string(char **s, char *to)
{
	*s = to;
}
