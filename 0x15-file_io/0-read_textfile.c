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
	int fd;
	ssize_t read_b, write_b;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (filename == NULL || buff == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	read_b = read(fd, buff, letters);
	if (read_b == -1)
	{
		close(fd);
		return (0);
	}
	write_b = write(STDOUT_FILENO, buff, read_b);
	close(fd);
	return (write_b);
}
