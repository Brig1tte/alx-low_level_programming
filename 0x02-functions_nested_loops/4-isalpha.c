#include "main.h"

/**
 * _isalpha - Check for alphabetic letters
 * @c: letters to be checked
 * Return: 1 if c is a letter or 0 anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
