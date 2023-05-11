#include "main.h"

int check_pal(char *s, int m, int len);
int _strlen_recursion(char *s);

/**
*is_palindrome - function to check if a string is palindrome
*@s: string to be reversed
*Return: 1 if it is a palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
*_strlen_recursion - function to return the length of a string
*@s: string to be reversed
*Return: string length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
check_pal - function to check characters for palindrome recursively
*@s: string to be checked
*@m: iterator
*@len: length of string
*Return: 1 if palindrome, 0 if not
*/
int check_pal(char *s, int m, int len)
{
	if (*(s + m) != *(s + len - 1))
		return (0);
	if (m >= len)
		return(1);
	return (check_pal(s, m + 1, len - 1));
}
