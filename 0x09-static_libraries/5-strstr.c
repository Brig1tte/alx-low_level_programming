#include "main.h"
#include <stddef.h>

/**
 * *_strstr - a function to locate a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the first occurrence, or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; ++haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			++h;
			++n;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}
