#include "main.h"
#include <stdlib.h>

/**
 * *_memset - function to fill memory with a constant byte
 * @a: memory area to be appended
 * @c: char to copy
 * @n: number of times to copy a
 * Return: pointer to the allocated memory
 */
char *_memset(char *a, char c, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		a[q] = c;
	}
	return (a);
}

/**
 * *_calloc - function to allocate memory for an array
 * @nmemb: number of elements of array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
	return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
