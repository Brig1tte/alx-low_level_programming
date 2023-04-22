#include <stdio.h>

/**
 * main - Advanced Comb
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = '0';
	int k = '1';

	while (b <= '9')
	{
		while (k <= '9')
		{
			if (!(b > k) || b == k)
			{
				putchar(b);
				putchar(k);
				if (b == '8' && k == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++;
		}
		k = '0';
		b++;
	}
	return (0);
}
