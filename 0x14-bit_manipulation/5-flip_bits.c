#include "main.h"

/**
 * flip_bits - function to return the num of bits needed to flip nums
 * @n: first num to flip
 * @m: second num to flip
 * Return: num of bit bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int recent;
	unsigned long int spec = n ^ m;
	int count = 0;
	int q;

	for (q = 63; q >= 0; q--)
	{
		recent = spec >> q;
		if (recent & 1)
			count++;
	}
	return (count);
}
