#include "main.h"

/**
 * *create_buffer - function to read 1024 bytes at a time for a buffer
 * @file: the file buffer stores chars for
 * Return: pointer to the new allocated buffer
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
