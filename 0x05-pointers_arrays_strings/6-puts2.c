#include "main.h"

/**
 * puts2 - prints every character of a string,from the 1st
 * @str: every other character to be printed
 * Return: void
 */
void puts2(char *str)
{
	int x;
	int l = 0;
	int b = 0;
	char *c = str;

	while (*c != '\0')
	{
		c++;
		l++;
	}

	b = l - 1;
	for (x = 0; x <= b; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
