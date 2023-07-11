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
	int i, j, res;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		res += atoi(argv[i]);
	}
	
	printf("%d\n", res);
	return (0);
}
