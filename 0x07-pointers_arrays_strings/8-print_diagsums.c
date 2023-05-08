#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function to print the sum of two diagonals
 * @a: input
 * @size: input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int b = 0;

	for (; b < size; b++)
	{
		sum1 += a[b * size + b];
	}
	for (b = size - 1; b >= 0; --b)
	{
		sum2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
