#include "main.h"

/**
 * *_strpbrk - a function to search a string for any of a set of bytes
 * @s: string
 * @accept: bytes in the string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int g, h;

	for (g = 0; s[g] != '\0'; ++g)
	{
		for (h = 0; accept[h] != 0; ++h)
		{
			if (s[g] == accept[h])
				return (s + g);
		}
	}
	return ('\0');
}
