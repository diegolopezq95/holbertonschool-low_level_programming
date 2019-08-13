#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file to be read.
 * @letters: number of letters to be read and printed.
 * Return: number of letters to read and print, otherwise 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf = malloc((sizeof(char) * letters + 1));

	if (filename == NULL || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);

	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, r);

	if (w == -1)
		return (0);

	close(fd);
	free(buf);
	return (r);
}
