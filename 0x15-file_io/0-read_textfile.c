#include "main.h"

/**
 * read_textfile - read text file and print to output.
 * @filename: file to read from.
 * @letters: count of letters it will read from.
 * Return: actual count of letters it can read
 * and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	int ch;
	ssize_t count = 1;

	if (filename == NULL)
	{
		return (0);
	}

	fd = fopen(filename, "r");
	if (!fd)
	{
		return (0);
	}

	while ((ch = fgetc(fd)) != EOF)
	{
		putchar(ch);
		if (ch != '\n')
		{
			count++;
		}
	}
	fclose(fd);
	return (count);
}
