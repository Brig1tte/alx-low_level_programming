#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - largest prime factor
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long  int maxX;
	double sqrt(n);

	for (maxX = 1; maxX <= sqrt(n); maxX++)
	{
		if (n % maxX == 0)
		{
			maxX = n / maxX;
		}
	}
	printf("%ld\n", maxX);
	return (0);
}
