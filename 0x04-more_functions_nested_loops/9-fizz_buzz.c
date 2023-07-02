#include <stdio.h>

/**
 * main - program to print fizz for mul of 3 and buzz
 * for mul of 5 and fizzbuzz for mul of both.
 * Return: 0 when program finish
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 3 == 0)
                {
                        printf("%s ", "Fizz");
                }
		else if (i % 5 == 0)
                {
                        printf("%s ", "Buzz");
                }
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}


