#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords for the 101-crackme program
 * Return: 0
 */
int main(void)
{
	int password[100];
	int k, sum, b;

	sum = 0;

	srand(time(NULL));

	for (k = 0; k < 100; k++)
	{
		password[k] = rand() % 78;
		sum += (password[k] + '0');
		putchar(password[k] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
