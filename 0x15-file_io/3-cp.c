#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * *create_buffer - function to read 1024 bytes at a time for a buffer
 * @file: the file buffer stores chars for
 * Return: pointer to the allocated buffer
 */
char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (b);
}

/**
 * close_file - function to close the file descriptor
 * @fd: the file descriptor to close
 */
void close_file(int fd)
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
 * Description: if the num of args is incorrect, exit(97)
 *	if file_from can't read or doesn't exist, exit(98)
 *	if write to file_to fails or can't be created, exit(99)
 *	if file descriptor(file_from/to) can't close, exit(100)
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, x, y;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	b = create_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	x = read(f_from, b, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f_from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		y = write(f_to, b, x);
		if (f_to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		x = read(f_from, b, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);

	free(b);
	close_file(f_from);
	close_file(f_to);

	return (0);
}
