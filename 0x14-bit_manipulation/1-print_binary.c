#include "main.h"

/**
 * print_binary - function to print the binary representation of a number
 * @n: number to print
 * Return: the binary representation of a number
 */
void print_binary(unsigned long int n)
{
	unsigned long int recent;
	int k;
	int count = 0;

	for (k = 63; k >= 0; k--)
	{
		recent  = n >> k;

		if (recent & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
