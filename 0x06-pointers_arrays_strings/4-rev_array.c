#include "main.h"

/**
 * reverse_array - a function to reverse the content of an array of integers
 * @n: number of elements of the array
 * @a: array of integers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
