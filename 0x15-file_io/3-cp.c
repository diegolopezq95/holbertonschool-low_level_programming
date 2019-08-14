#include "holberton.h"

/**
 * cant_read - prints error.
 * @filename: name of the file to be read.
 * Return: .
 */

void cant_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * cant_cr_or_wr - prints error.
 * @filename: name of the file to be read.
 * Return: .
 */

void cant_cr_or_wr(char *file)
{
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
        exit(99);
}

/**
 * cant_close - prints error.
 * @filename: name of the file to be read.
 * Return: .
 */

void cant_close(int fd)
{
        dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
        exit(100);
}

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to be read.
 * @text_content: a NULL terminated string to add at the end
 * Return: 1 on success, -1 on failure.
 */

int cp_file(char *filename, char *newfilename)
{
	int fd, fd_new, r, w;
	char buf[SIZE];

	if (filename == NULL || buf == NULL)
		cant_read(filename);
	if (newfilename == NULL || buf == NULL)
		cant_cr_or_wr(newfilename);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		 cant_read(filename);

	fd_new = open(newfilename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_new == -1)
		cant_cr_or_wr(newfilename);

	r = read(fd, buf, SIZE);

	if (r == -1)
		cant_read(filename), buf[r] = '\0';

	while (r)
	{
		w = write(fd_new, buf, r);
		if (w == -1)
			cant_cr_or_wr(newfilename);
		r = read(fd, buf, SIZE);
		if (r == -1)
			cant_read(filename);
	}
	if (close(fd) == -1)
		cant_close(fd);
	if (close(fd_new) == -1)
		cant_close(fd_new);
	return (0);

}
/**
 * main - entry point
 * @argc: counts number of arguments passed from command line
 * @argv: array of arguments passed from command line
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *filename, *newfilename;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filename = argv[1];
	newfilename = argv[2];

	cp_file(filename, newfilename);

	return (0);
}
