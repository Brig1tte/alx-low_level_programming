#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: copy the string from
 * @dest: copy the string to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}

	for (; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
