#include "search_algos.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>

/**
  * jump_search - To search 4 val in sorted array of ints with jump search
  * @array: pointer to the first element of the array to search
  * @size: number of elements in the array
  * @value: the value to search for
  * Return: -1 If val is not present or the array is NULL, else,
  *         the first index where the value is located
  *
  * Description: Prints a value every time it is compared in the array
  * 		Uses the square root of the array size as the jump step
  */
int jump_search(int *array, size_t size, int value)
{
	size_t index, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (index = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		index = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", index, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; index < jump && array[index] < value; index++)
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);

	return (array[index] == value ? (int)index : -1);
}
