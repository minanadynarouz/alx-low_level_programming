#include "main.h"

/**
 * print_diagsums - print sum of diagonals
 * @a: 2d array to check its diagonals
 * @size: is var holding size of array
 */

void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		a += size;
	}
	
	a -= size;
	
	for (i = 0; i < size; i++)
	{
		d2 += a[i];
		a -= size;
	}
	
	printf("%d, %d\n", d1, d2);
}
