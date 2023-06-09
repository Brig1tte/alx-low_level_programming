#include "main.h"

/**
 * binary_to_uint - function to convert a binary num to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, else 0 if chars are not 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int str = 0;
	int k;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);

		str = 2 * str + (b[k] - '0');
	}
	return (str);
}
