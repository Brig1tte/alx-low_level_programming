#include "main.h"

/**
 * create_file - function to create a file
 * @filename: the name of the file to create
 * @text_content: pointer to a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, y, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(fd, text_content, len);

	if (fd == -1 || y == -1)
		return (-1);

	close(fd);
	return (1);
}
