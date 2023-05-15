#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function to concatenate all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, k, q = 0, s = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			s++;
	}
	s = s + ac;

	str = malloc(sizeof(char) * s + 1);

	if (str == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			str[q] = av[j][k];
			q++;
		}
		if (str[q] == '\0')
		{
			str[q++] = '\n';
		}
	}
	return (str);
}
