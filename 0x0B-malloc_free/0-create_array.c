#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function to create array of char, inits by specific 'c'
 * @size: array size
 * @c: char to assign
 * Return: pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int k;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		s[k] = c;
	}
	return (s);
}
