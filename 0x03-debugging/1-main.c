#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming : (\n");

	i = 0;

	/* This part will cause the output to go into an infinite loop */
	while (i < 10)
	{
		putchar(i);
	}

	printf("Infiniite loop avoided! \\o/\n");
	return (0);
}
