#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function to concatenate two strings
 * @s1: first input string
 * @s2: second input string
 * Return: concat of the two inputs
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int j, kj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = kj = 0;
	while (s1[j] != '\0')
	{
		j++;
	}

	while (s2[kj] != '\0')
	{
		kj++;
	}
	concat = malloc(sizeof(char) * (j + kj + 1));

	if (concat == NULL)
		return (NULL);

	j = kj = 0;
	while (s1[j] != '\0')
	{
		concat[j] = s1[j];
		j++;
	}

	while (s2[kj] != '\0')
	{
		concat[j] = s2[kj];
		j++;
		kj++;
	}
	concat[j] = '\0';
	return (concat);
}
