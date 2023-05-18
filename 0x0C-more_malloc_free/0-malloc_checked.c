#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - function to allocate memory using malloc
 * @b: size of bytes to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
