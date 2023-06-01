#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - a function to print all the elements of a list_t list
 * @h: a pointer to the list_t list to be printed
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		p++;
	}
	return (p);
}
