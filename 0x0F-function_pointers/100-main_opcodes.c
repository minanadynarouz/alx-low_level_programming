#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point that will print hex values.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i, num;
	unsigned char *ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02x", ptr[i]);
		if (i < num - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
