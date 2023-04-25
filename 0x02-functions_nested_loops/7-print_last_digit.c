#include "main.h"

/**
 * print_last_digit - The last digit of a number
 * @s: The number to be printed
 * Return: the value of the last digit of a number
 */
int print_last_digit(int s)
{
	int ld;

	ld = s % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
