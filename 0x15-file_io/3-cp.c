#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int fp, create_fp;
	ssize_t readBytes, writeBytes;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fp = open(argv[1], O_RDONLY);
	readBytes = read(fp, buffer, sizeof(buffer));
	if (fp == -1 || readBytes == -1)
	{
		close(fp);
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
	}
	create_fp = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	writeBytes = write(create_fp, buffer, readBytes);
	if (create_fp == -1 || writeBytes == -1)
	{
		close(fp);
		close(create_fp);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);
	}
	if (close(fp) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp), exit(100);

	if (close(create_fp) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", create_fp), exit(100);
	return (0);
}
