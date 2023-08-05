#include "main.h"

/**
 * set_bit - set value of a bit at a given index.
 * @n: number to get its value.
 * @index: index of the bit.
 * Return: 1 if worked, 0 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
