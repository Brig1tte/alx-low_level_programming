#include "main.h"

/**
 * set_string - a function to set the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
