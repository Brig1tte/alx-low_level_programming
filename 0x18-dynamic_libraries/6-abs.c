#include "main.h"

/**
 * _abs - Absolute value of an integer
 * @a: the number to be computed
 * Return: absolute value or zero
 */
int _abs(int a)
{
	if (a < 0)
	{
		int _abs_val;

		_abs_val = a * -1;
		return (_abs_val);
	}
	return (a);
}
