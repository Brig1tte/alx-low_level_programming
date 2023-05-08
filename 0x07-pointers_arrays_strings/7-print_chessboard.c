#include "main.h"

/**
 * *print_chessboard - a function to print the chessboard
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int g, h;

	for (g = 0; g < 8; g++)
	{
		for (h = 0; h < 8; h++)
			_putchar(a[g][h]);
		_putchar('\n');
	}
}
