#include "main.h"

int  natural_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - function to return the natural square root of a number
 * @n: a number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - function recurses to find actual sqrt of a number
 * @n: a number
 * @m: iterator
 * Return: the natural square root
 */
int natural_sqrt_recursion(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
		return (m);
	return (natural_sqrt_recursion(n, m + 1));
}
