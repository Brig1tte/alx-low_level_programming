#include <stdio.h>

/**
 * main - Advanced Comb
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	int k;

	for (b = 48; b <= 56; b++)
	{
		for (k = 49; k <= 57; k++)
		{
			if (b < k)
			{
				putchar(b);
				putchar(k);
				if (b != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
