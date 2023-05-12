#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int a, b, c, length, k, digit;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	k = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (a < length && k == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			k = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			k = 0;
		}
		a++;
	}
	if (k == 0)
		return (0);
	return (c);
}
