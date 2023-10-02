#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to create.
 * @text_content: chars to be written to the new file.
 * Return: 1 on success, -1 on failure (file can not
 * be created, file can not be written, write “fails”,
 * etc…).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i;
	ssize_t writeBytes;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_RDWR | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}

	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}

	writeBytes = write(fp, text_content, i);
	if (writeBytes == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}

