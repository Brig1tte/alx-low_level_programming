#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function to duplicate a string to a new memory space location
 * @str: character
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *ffff;
	int k, j = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	ffff = malloc(sizeof(char) * (k + 1));

	if (ffff == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
		ffff[j] = str[j];
	return (ffff);
}
