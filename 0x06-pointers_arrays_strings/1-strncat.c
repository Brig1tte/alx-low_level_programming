#include "main.h"

/**
 * *_strncat - a function to concatenate two strings
 * @src: string to be appended
 * @dest: resulting string
 * @n: input value
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		++a;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		++a;
		++b;
	}
	dest[a] = '\0';
	return (dest);
}
