#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to return the sum of all its params
 * @n: number of params passed
 * @...: a variable number of params to calculate sum of
 * Return: 0 if n == 0, otherwise sum of all params.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int k, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (k = 0; k < n; k++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
