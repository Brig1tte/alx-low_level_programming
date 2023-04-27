#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int b, k;

	for (b = 0; b <= 9; b++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				_putchar('1');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
