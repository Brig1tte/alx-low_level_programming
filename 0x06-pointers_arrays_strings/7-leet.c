#include "main.h"

/**
 * *leet - a function to encode a string into 1337
 * @k: input value
 * Return: k value
 */
char *leet(char *k)
{
	int a, b;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (a = 0; k[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (k[a] == str1[b])
			{
				k[a] = str2[b];
			}
		}
	}
	return (k);
}
