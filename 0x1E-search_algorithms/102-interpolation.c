#include "search_algos.h"
#include <math.h>
#include <stdio.h>
#include <stddef.h>

/**
  * interpolation_search - To srch for val in sorted array of ints with I_Srch
  * @array: pointer to the first element of the array to search
  * @size: number of elements in the array
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL, -1, else,
  *		the first index where the value is located
  *
  * Description: Prints a value every time it is compared in the array
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t indx, j, z;

	if (array == NULL)
		return (-1);

	for (j = 0, z = size - 1; z >= j;)
	{
		indx = j + (((double)(z - j) / (array[z] - array[j])) * (value - array[j]));
		if (indx < size)
			printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", indx);
			break;
		}

		if (array[indx] == value)
			return (indx);
		if (array[indx] > value)
			z = indx - 1;
		else
			j = indx + 1;
	}

	return (-1);
}
