#include "main.h"

/**
 * *_strpbrk - a function to search a string for any of a set of bytes
 * @s: string
 * @accept: bytes in the string
 * Returns: a pointer to the byte in s, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; ++f)
		{
			if (*s == accept[f])
				return (s);
		}
		s++;
	}
	return ('\0');
}
