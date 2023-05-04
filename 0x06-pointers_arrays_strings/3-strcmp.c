#include "main.h"

/**
 * _strcmp - a function to compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: s1[a] - s2[a]
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		++a;
	}
	return (0);
}
