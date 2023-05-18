#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function to create an array of integers
 * @min: minimum range of value stored
 * @max: maximum range of value stored
 * Return: pointer(p) to newly created array
 */
int *array_range(int min, int max)
{
	int *p, r, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (r = 0; min <= max; r++)
	p[r] = min++;
	return (p);
}
