#include "main.h"

/**
 * rot13 - rotate string provided for cyphering
 * @c: string to be cyphered
 * Return: char
 */

char *rot13(char *c)
{
	int i, j;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dataRot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; dataRot[j] != '\0'; j++)
		{
			if (c[i] == data[j])
			{
				c[i] = dataRot[j];
				break;
			}
		}
	}
	return (c);
}
