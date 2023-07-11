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
	int coins[] = {25, 10, 5, 2, 1};
	int cents;
	int i;
	int counter;

	if (argc != 2)
	{
		printf("Error\n");
		
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
		
		return (0);
	}

	i = 0;
	counter = 0;

	while (cents > 0)
	{
		if (cents >= coins[i])
		{
			cents -= coins[i];
			counter++;
		}
		else
		{
			i++;
		}
	}

	printf("%d\n", counter);
	
	return 0;
}
