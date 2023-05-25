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

	va_start
