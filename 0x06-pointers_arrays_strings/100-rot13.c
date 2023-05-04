#include "main.h"

/**
 * *rot13 - a function to encode strings using rot13
 * @str: pointer to string
 * Return: *str
 */
char *rot13(char *str)
{
	int a, b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; ++a)
	{
		for (b = 0; b < 52; ++b)
		{
			if (str[a] == data1[b])
			{
				str[a] = datarot[b];
				break;
			}
		}
	}
	return (str);
}
