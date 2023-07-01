#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = 0, i = 0;
	int arr[4];

	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = -1;

	while (arr[i] != -1)
	{
		if (largest < arr[i])
		{
			largest = arr[i];
		}
		i++;
	}

	return (largest);
}
