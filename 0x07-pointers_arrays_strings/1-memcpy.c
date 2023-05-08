#include "main.h"

/**
 * _memcpy - a function to copy memory area
 * @dest:memory area copied to
 * @src: memory area copied from
 * @n: bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c, f = n;

	for (c = 0; c < f; ++c)
	{
		dest[c] = src[c];
		--n;
	}
	return (dest);
}
