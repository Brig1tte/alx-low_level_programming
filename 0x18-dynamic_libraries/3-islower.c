#include "main.h"

/**
 *  _islower - Check-the-Lowercase Letters
 * @c: The Letters to be checked
 * Return: 1 for lowercase or 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
