#include "main.h"
#include <stdlib.h>

/**
 * *alloc_grid - function to return a pointer
 * @width: width input
 * @height: height input
 * Return: a pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **soo;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	soo = malloc(sizeof(int *) * height);

	if (soo == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		soo[a] = malloc(sizeof(int) * width);
		if (soo[a] == NULL)
		{
			for (; a >= 0; a--)
				free(soo[a]);
			free(soo);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			soo[a][b] = 0;
	}
	return (soo);
}
