#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to be read.
 * @text_content: a NULL terminated string to add at the end
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
	{
		if (fd == -1)
			return (-1);
		else
			return (1);
	}
	if (fd == -1)
		return (-1);

	length = 0;
	while (text_content[length] != '\0')
	{
		length++;
	}

	w = write(fd, text_content, length);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
