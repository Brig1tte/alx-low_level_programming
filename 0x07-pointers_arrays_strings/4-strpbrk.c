#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - a function to search a string for any of a set of bytes
 * @s: string
 * @accept: bytes in the string
 * @_strpbrk(): locates the first occurrence in the string s
 * Return: a pointer to the byte in s, or NULL if no such byte is found
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
	return (NULL);
}
