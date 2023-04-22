#include <stdio.h>

/**
 * main - Print Numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		putchar(y + 48);
	}
	putchar('\n');
	return (0);
}
