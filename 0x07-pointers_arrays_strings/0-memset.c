#include "main.h"

/**
 * _memset - a function to fill memory with a constant byte
 * @s: starting addressof memory to be filled
 * @b: constant byte
 * @n: value of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n >= 1; ++k)
	{
		s[k] = b;
		--n;
	}
	return (s);
}
