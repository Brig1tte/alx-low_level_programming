#include "main.h"

/**
 * *_strchr - a function to locate a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurence, or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int q = 0;

	for (; s[q] >= '\0'; ++q)
	{
		if (s[q] == c)
			return (&s[q]);
	}
	return (0);
}
