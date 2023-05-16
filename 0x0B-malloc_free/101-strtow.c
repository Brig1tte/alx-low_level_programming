#include "main.h"
#include <stdlib.h>

/**
 * words_count - function to help count the number of words in a strin
 * @s: string to be counted
 * Return: number of words
 */
int words_count(char *s)
{
	int flag, h, z;

	flag = 0;
	z = 0;

	for (h = 0; s[h] != '\0'; h++)
	{
		if (s[h] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			z++;
		}
	}
	return (z);
}

/**
 * **strtow - function to split a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL(Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int q, r = 0, len = 0, words, p = 0, begin, end;

	while (*(str + len))
		len++;
	words = words_count(str);
	if (words == 0)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (q = 0; q <= len; q++)
	{
		if (str[q] == ' ' || str[q] == '\0')
		{
			if (p)
			{
				end = q;
				tmp = (char *)malloc(sizeof(char) * (p + 1));
				if (tmp == NULL)
					return (NULL);

				while (begin < end)
					*tmp++ = str[begin++];
				*tmp = '\0';
				matrix[r] = tmp - p;
				r++;
				p = 0;
			}
		}
		else if (p++ == 0)
			begin = q;
	}
	matrix[r] = NULL;
	return (matrix);
}
