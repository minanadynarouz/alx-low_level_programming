#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - function that print buffer of char pointer.
 * @b: is buffer to be checked.
 * @size: is size of buffer.
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = 0; j < 10; j++)
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

		for (j = 0; j < 10; j++)
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
