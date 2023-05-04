#include "main.h"

/**
 * *string_toupper - a function to change all lowercase letters to uppercase
 * @k: pointer
 * Return: Uppercase Letters
 */
char *string_toupper(char *k)
{
	int a = 0;

	while (k[a] != '\0')
	{
		if (k[a] >= 'a' && k[a] <= 'z')
			k[a] -= 32;
		++a;
	}
	return (k);
}
