#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 - 100
 * for multiples of 3 print Fizz instead of the number
 * and for multiples of 6 print Buzz instead of the number
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((j % 3 == 0) && (j % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", j);
		}
		if (j != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
