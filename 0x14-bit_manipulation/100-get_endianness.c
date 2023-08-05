#include "main.h"

/**
 * get_endianness - determine little or big endian.
 * union: is union used to test.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	union
	{
		unsigned int value;
		unsigned char bytes[sizeof(unsigned int)];
	} data;

	data.value = 1;

	if (data.bytes[0] == 1)
	{
		return (1);
	}
	return (00);
}
