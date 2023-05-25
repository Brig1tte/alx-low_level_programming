#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a variable number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int l;

	va_start(num, n);

	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(num, int));

		if (l != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
