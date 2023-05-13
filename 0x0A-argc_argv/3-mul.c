#include "main.h"
#include <stdio.h>

/**
 * _atoi - function to convert a string to an integer
 * @s: string
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int b, k, m, len, x, digit;

	b = 0;
	k = 0;
	m = 0;
	len = 0;
	x = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;

	while (b < len && x == 0)
	{
		if (s[b] == '-')
			k++;
		if (s[b] >= '0' && s[b] <= '9')
		{
			digit = s[b] - '0';
			if (k % 2)
				digit = -digit;
			m = m * 10 + digit;
			x = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			x = 0;
		}
		b++;
	}
	if (x == 0)
		return (0);
	return (m);
}

/**
 * main - function to multiply two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
