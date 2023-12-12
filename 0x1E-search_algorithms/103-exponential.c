#include "search_algos.h"
#include <stdio.h>
/**
  * _binary_search - To srch 4 values in sorted array of ints with binary srch
  * @array: pointer to the first element of the array to search
  * @left: starting index of the [sub]array to search
  * @right: The ending index of the [sub]array to search
  * @value: The value to search for
  * Return: If val is not present or the array is NULL, -1, else,
  *		the index where the value is located
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}
	return (-1);
}

/**
  * exponential_search - To srch 4 values in sorted array of ints with expo_s
  * @array: pointer to the first element of the array to search
  * @size: the number of elements in the array
  * @value: value to search for
  * Return: If the value is not present or the array is NULL, -1
  *         Otherwise, the index where the value is located
  *
  * Description: Prints a value every time it is compared in the array
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (idx = 1; idx < size && array[idx] <= value; idx = idx * 2)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}

	right = idx < size ? idx : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, right);
	return (_binary_search(array, idx / 2, right, value));
}
