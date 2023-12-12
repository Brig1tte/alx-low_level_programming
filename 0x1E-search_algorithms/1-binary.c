#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - To srch 4 values in sorted array of ints with B_S algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index where val is located, else -1 if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0, j = 0, z = size - 1, k;

	if (!array)
		return (-1);
	while (j <= z)
	{
		printf("Searching in array: ");
		for (index = j; index <= z; index++)
		{
			printf("%d", array[index]);
			if (index < z)
				printf(", ");
			else
				printf("\n");
		}
		k = (j + z) / 2;
		if (array[k] < value)
			j = k + 1;
		else if (array[k] > value)
			z = k - 1;
		else
			return (k);
	}
	return (-1);
}
