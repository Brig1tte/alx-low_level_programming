#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @r: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *r, int size)
{
	int a, l, x;

	a = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (a < size)
	{
		l = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);

		for (x = 0; x < 10; x++)
		{
			if (x < l)
				printf("%02x", *(r + a + x));
			else
				printf("  ");
			if (x % 2)
			{
				printf(" ");
			}
		}

		for (x = 0; x < l; x++)
		{
			int c = *(r + a + x);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
