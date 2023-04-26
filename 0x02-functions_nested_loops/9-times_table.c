#include "main.h"

/**
 * times_table -  print the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int k, l, m, n, r;

	for (k = 0; k <= 9; k++)
	{
	for (l = 0; l <= 9; l++)
	{
	m = k * l;
	if (m > 9)
	{
	n = m % 10;
	r = (m - n) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(r + '0');
	_putchar(n + '0');
	}
	else
	{
	if (l != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(m + '0');
	}
	}
	_putchar('\n');
	}
}
