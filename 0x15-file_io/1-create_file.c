#include "holberton.h"

/**
 * create_file - creates a file named filename
 * @filename: name of the file to be read.
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

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
