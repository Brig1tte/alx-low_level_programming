#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, m;

		for (l = 1; l <= size; l++)
		{
			for (m = l; m < size; m++)
			{
				_putchar(' ');
			}
			for (m = 1; m <= l; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
