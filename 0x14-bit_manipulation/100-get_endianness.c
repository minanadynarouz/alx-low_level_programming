#include "main.h"

/**
 * get_endianness - determine little or big endian.
 * Return: 0 if big endian, 1 if little endian.
 */

/**
 * struct description - A union to store 
 * an integer and its individual bytes.
 * @value: The integer value stored in the union.
 * @bytes: An array of bytes representing the 
 * integer value.
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
