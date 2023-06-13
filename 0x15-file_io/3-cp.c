#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *f);
void close_f(int fd);

/**
 * *create_buffer - function to read 1024 bytes at a time for a buffer
 * @f: the file buffer stores chars for
 * Return: pointer to the allocated buffer
 */
char *create_buffer(char *f)
{
	char buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buff);
}


/**
 * close_f - function to close the file descriptor
 * @fd: the file descriptor to close
 * Return: void
 */
void close_f(int fd)
{
	int k;

	k = close(fd);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Function to copy contents of a file into another
 * @argv: Array of pointers to the argument
 * @argc: Number of arguments passed
 * Return: 0(Succes)
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, x, y;
	char buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	x = read(f_from, buff, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f_from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		y = write(f_to, buff, x);
		if (f_to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		x = read(f_from, buff, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);

	free(buff);
	close_f(f_from);
	close_f(f_to);

	return (0);
}
