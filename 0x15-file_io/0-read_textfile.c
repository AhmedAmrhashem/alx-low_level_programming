#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the name of file
 * @letters: number of letters that are read and printed
 *
 * Return: the numbers it can read or print, or 0
 * if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = open(filename, O_RDONLY);
	ssize_t let = 0;
	char *buff = malloc(sizeof(char) * letters);

	if (fd == -1)
	       return (0);
	let = read(fd, filename, let);
	wri = write(STDOUT_FILENO, buf, let);

	free(buff);
	close(fd);
	return (wri);
}
