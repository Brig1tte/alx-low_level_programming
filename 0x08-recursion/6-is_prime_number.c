#include "main.h"

int real_prime(int n, int m);

/**
*is_prime_number - function to tell if an integer is a  prime number or not
*@n: an integer
*Return: 1 if n is a prime number or 0 if otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (real_prime(n, n - 1));
}

/**
*real_prime - to calculate if a number is prime recursively
*@n: an integer
*@m: iterator
*Return: 1 if n is a prime and, 0 if not
*/
int real_prime(int n, int m)
{
	if (m == 1)
	{
		return(1);
	}
	if (n % m == 0 && m > 0)
		return (0);
	return (real_prime(n, m - 1));
}
