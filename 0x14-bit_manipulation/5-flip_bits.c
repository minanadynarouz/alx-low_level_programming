#include "main.h"

/**
 * flip_bits - the number of bits you would need to
 * flip to get from one number to another
 * @n: number to get its value.
 * @m: number to reach.
 * Return: number of bits required to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num_flips = 0;

	for (i = 0; i <= 63; i++)
	{
		if ((m & 1) != (n & 1))
		{
			num_flips += 1;
		}
		n >>= 1;
		m >>= 1;
	}
	return (num_flips);
}
