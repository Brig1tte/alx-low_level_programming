#include "main.h"

/**
 * print_binary - function to print the binary rep of a num
 * @n: num to print
 * Return: the binary rep of a num
 */
void print_binary(unsigned long int n)
{
	unsigned long int recent;
	int q;
	int count = 0;

	for (q = 63; q >= 0; q--)
	{
		recent = n >> q;

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
