#include "main.h"

/**
 * main - is main program
 * @argc: counter of arguments
 * @argv: string arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
