#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - To search for values in array of ints using L_S algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
