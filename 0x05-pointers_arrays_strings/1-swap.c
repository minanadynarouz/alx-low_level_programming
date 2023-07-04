#include "main.h"

/**
 * swap_int - Function is two swap values of two ints
 * @a: first var to be checked
 * @b: Second var to be checked
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
