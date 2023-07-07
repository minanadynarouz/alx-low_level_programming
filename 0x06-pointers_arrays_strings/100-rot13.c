#include "main.h"

/**
 * rot13 - 
 * @c:
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
			}
		}
	}
	return (c);
}
