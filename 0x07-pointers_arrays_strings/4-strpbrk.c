#include "main.h"

/**
 * *_strpbrk - a function to search a string for any of a set of bytes
 * @s: string
 * @accept: bytes in the string
 * Returns: a pointer to the byte in s, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int f, h;

	for (f = 0; s[f] != '\0'; ++f)
	{
		for (h = 0; accept[h] != 0; ++h)
		{
			if (s[f] == accept[h])
				return (s + f);
		}
	}
	return ('\0');
}
