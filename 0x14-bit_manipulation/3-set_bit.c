#include "main.h"

/**
 * set_bit - function to set the value of bit to 1 at a given index
 * @n: pointing to the number to be changed
 * @index: the index, starting from 0 of the bit needed
 * Return: 1 if it works, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
