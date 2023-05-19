#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * is_digit - function to check if a string contains a non-digit char
 * @s: string to be examined
 * Return: 0 if non-digit is found, otherwise 1
 */
int is_digit(char *s)
{
	int q = 0;

	while (s[q])
	{
		if (s[q] < '0' || s[q] > '9')
			return (0);
		q++;
	}
	return (1);
}

/**
 * _strlen - function to return length of a string
 * @s: string to be examined
 * Return: the length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
 * errors - function to handle errors for main
 * Return: void
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, t, carry, digit1, digit2, *result, r = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (t = 0; t <= len1 + len2; t++)
		result[t] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry = carry + result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry = carry / 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (t = 0; t < len - 1; t++)
	{
		if (result[t])
			r = 1;
		if (r)
			_putchar(result[t] + '0');
	}
	if (!r)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
