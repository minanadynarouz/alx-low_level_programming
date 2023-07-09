#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - function that print buffer of char pointer.
 * @b: is buffer to be checked.
 * @size: is size of buffer.
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
	}

	for (int i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				unsigned char byte = b[i + j];
				printf("%02x ", byte);
			}
			else
			{
				printf("   ");
			}
		}

		printf(" ");

		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				unsigned char byte = b[i + j];
				if (isprint(byte))
				{
					printf("%c", byte);
				}
				else
				{
					printf(".");
				}
			}
		}

		printf("\n");
	}
}
