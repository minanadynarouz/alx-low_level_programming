#include "main.h"

/**
 * argstostr - function copy argument vectors to new pointer
 * @ac: argument count
 * @av: argument vector
 * Return: new pointer
 */

char *argstostr(int ac, char **av)
{
	int len = 0, k = 0;
	int i, j;

	char *newStr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	newStr = malloc(sizeof(char) * (len + ac + 1));
	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newStr[k++] = av[i][j];
		}
		newStr[k++] = '\n';
	}
	newStr[k] = '\0';
	return (newStr);
}
