#include "main.h"

/**
 * _strspn - a function to get the length of a prefix substring
 * @s: initial segment
 * @accept: bytes in the initial segment
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int v = 0;
	int p = 0;

	while (*s)
	{
		for (; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				v++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (v);
		}
		s++;
	}
	return (0);
}
