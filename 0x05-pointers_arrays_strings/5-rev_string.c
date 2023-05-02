#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int b;
	int counter = 0;
	char reverse = s[0];

	while (s[counter] != '\0')
		counter++;

	for (b = 0; b < counter; b++)
	{
		counter--;
		reverse = s[b];
		s[b] = s[counter];
		s[counter] = reverse;
	}
}
