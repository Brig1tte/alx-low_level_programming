#include "function_pointers.h"

/**
 * int_index - function to return the index of the first element
 * @array: array to be used
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;
	
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
