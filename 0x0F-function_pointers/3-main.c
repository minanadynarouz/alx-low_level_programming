#include "3-calc.h"

/**
 * main - the main function that run calculation
 * @argc: arguments count.
 * @argv: argument vector
 * Return: int with value based on calc.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);
	return (0);
}
