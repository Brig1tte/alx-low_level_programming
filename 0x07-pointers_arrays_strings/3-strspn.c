#include "main.h"

/**
 * _strspn - a function to get the length of a prefix substring
 * @s: initial segment
 * @accept: bytes in the initial segment
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, p, val, check;

	val = 0;
	for (k = 0; s[k]; k++)
	{
		reveal = 0;
		for (p = 0; accept[p] != '\0'; ++p)
		{
			if (s[k] == accept[p])
			{
				++val;
				check = 1;
			}
		}
	}
}
