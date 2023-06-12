#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function to read a text file and print it to the POSIX STDOUT
 * @filename: text file to be read
 * @letters: number of letters to be read and printed
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fd;
	ssize_t y;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	r = read(fd, b, letters);
	y = write(STDOUT_FILENO, b, r);

	free(b);
	close(fd);
	return (y);
}
