#include "main.h"

/**
 * clear_bit - function to set value of a bit to 0 at a given index
 * @n: pointing to the number to be changed
 * @index: index, starting from 0 of bit needed
 * Return: 1 if it works, or -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
