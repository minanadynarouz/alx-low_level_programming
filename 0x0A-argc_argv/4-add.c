#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - is main program
 * @argc: counter of arguments
 * @argv: string arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);

		return (1);
	}

	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("%s\n", "Error");

			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
