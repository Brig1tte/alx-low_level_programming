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
	size_t indx, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (indx = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		indx = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", indx, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; indx < jump && array[indx] < value; indx++)
		printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);
	printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);

	return (array[indx] == value ? (int)indx : -1);
}
