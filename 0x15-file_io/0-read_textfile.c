#include "main.h"

/**
 * read-textfile - function to read a text file and print it to POSIX STDOUT
 * @filename: text file to be read
 * @letters: number of letters to be read and printed
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fd, y, r;

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
