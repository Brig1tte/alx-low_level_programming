#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of lines to be printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r;

		for (r = 1; r <= n; r++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
