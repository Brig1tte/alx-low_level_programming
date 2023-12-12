#include "search_algos.h"
#include <stdio.h>

/**
  * advanced_binary_recursive - Searches recursively 4 values
  *			in sorted array of ints with binary search
  * @array: pointer to the first element of the [sub]array to search
  * @left: starting index of the [sub]array to search
  * @right: ending index of the [sub]array to search
  * @value: value to search for
  * Return: If the value is not present, -1
  *         Else, the index where the value is located
  *
  * Description: Prints the [sub]array being searched after each change
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t idx;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (idx = left; idx < right; idx++)
		printf("%d, ", array[idx]);
	printf("%d\n", array[idx]);

	idx = left + (right - left) / 2;
	if (array[idx] == value && (idx == left || array[idx - 1] != value))
		return (idx);
	if (array[idx] >= value)
		return (advanced_binary_recursive(array, left, idx, value));
	return (advanced_binary_recursive(array, idx + 1, right, value));
}

/**
  * advanced_binary - To srch 4 values in sorted array of ints with adv. B_S
  * @array: pointer to the first element of the array to search
  * @size: number of elements in the array
  * @value: value to search for
  * Return: If the value is not present or the array is NULL, -1
  *         Else, the first index where the value is located
  *
  * Description: Prints the [sub]array being searched after each change
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
