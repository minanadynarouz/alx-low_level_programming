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
	int fp;
	ssize_t readBytes;
	ssize_t writeBytes;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (filename == NULL || buff == NULL)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}

	readBytes = read(fp, buff, letters);
	if (readBytes == -1)
	{
		close(fp);
		return (0);
	}

	writeBytes = write(STDOUT_FILENO, buff, readBytes);
	close(fp);
	return (writeBytes);
}
