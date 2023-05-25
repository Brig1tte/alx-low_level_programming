#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function to print anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *s, *separator = "";
	va_list lists;

	va_start(lists, format);

	if (format)
	{
		while (format[k])
		{
			switch(format[k])
			{
				case 'c':
					printf("%s%c", separator, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(lists, double));
					break;
				case 's':
					s = va_arg(lists, char *);

					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;

				default:
					k++;
					continue;
			}
			separator = ", ";
			k++;
		}
	}
	
	printf("\n");
	
	va_end(lists);
}
