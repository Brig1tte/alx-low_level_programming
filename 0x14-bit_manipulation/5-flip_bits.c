#include "main.h"

/**
 * flip_bits - function to return the number of bits needed to flip numbers
 * @n: first number to flip
 * @m: second number to flip
 * Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int recent;
	unsigned long int spec = n ^ m;
	int count = 0;
	int k;

	for (k = 63; k >= 0; k--)
	{
		recent = spec >> k;
		if (recent & 1)
			count++;
	}
	return (count);
}
