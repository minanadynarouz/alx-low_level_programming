#include <stdlib.h>
#include "main.h"

/**
 * main - is main program
 * @argc: counter of arguments
 * @argv: string arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("%s\n", "Error");

		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
	}

	printf("%d\n", mult);

	return (0);
}
