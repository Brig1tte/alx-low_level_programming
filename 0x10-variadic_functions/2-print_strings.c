#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: a variable number of strings to print
 * Return: If separator is NULL, don’t print it. Ootherwise,
 *          If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *s;
	unsigned int k;

	va_start(string, n);

	for (k = 0; k < n; k++)
	{
		s = va_arg(string, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
