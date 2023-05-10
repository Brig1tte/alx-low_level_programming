#include "main.h"

/**
 * factorial - a function to return the factorial of a given number
 * @n: a given number
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
