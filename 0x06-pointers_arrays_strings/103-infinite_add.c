#include "main.h"

/**
 * reverse_r - used at the end of otheer function to reverse the output
 * infinite_add - keep adding numbers represented as char
 * @r: is char array to  be reversed
 * @n1: first number to be added.
 * @n2: second number to be added.
 * @r: buffer to store the result in.
 * @size_r: the buffer size.
 * Return: char pointer.
 */

char *reverse_r(char *r)
{
	int len = 0;
	int i, j;
	char temp;

	for (i = 0; r[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	return r;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum, digit;
	int i = 0;

	while (*n1 != '\0' || *n2 != '\0')
	{
		sum = carry;

		if (*n1 != '\0')
		{
			sum += (*n1 - '0');
			n1++;
		}

		if (*n2 != '\0')
		{
			sum += (*n2 - '0');
			n2++;
		}

		digit = sum % 10;
		carry = sum / 10;

		if (i >= size_r - 1)
		{
			return 0;
		}

		r[i] = digit + '0';
		i++;
	}

	if (carry > 0)
	{
		if (i >= size_r - 1)
		{
			return 0;
		}

		r[i] = carry + '0';
		i++;
	}

	r[i] = '\0';

	reverse_r(r);

	return r;
}
