#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * if odd length, n = (length_of_the_string - 1) / 2
 * Return: void
 */
void puts_half(char *str)
{
	int a, l, x;

	l = 0;
	for (a = 0; str[a] != '\0'; a++)
		l++;

	x = (l / 2);
	if ((l % 2) == 1)
		x = ((l + 1) / 2);

	for (a = x; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
