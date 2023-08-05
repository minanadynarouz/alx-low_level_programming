#include "main.h"

/**
 * binary_to_uint - return decimal num from binary.
 * @b: points to 0 or 1
 * Return: decimal num or zero
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
