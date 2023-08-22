#include "main.h"

/**
 * *_strncpy - a function to copies a string
 * @dest: resulting string
 * @src: string to be appended
 * @n: input value
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		++b;
	}

	while (b < n)
	{
		dest[b] = '\0';
		++b;
	}
	return (dest);
}
