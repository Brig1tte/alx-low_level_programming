#include "main.h"

/**
 * get_endianness - function to check the endianness
 * Return: 0 if endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *y = (char *) &q;

	return (*y);
}
