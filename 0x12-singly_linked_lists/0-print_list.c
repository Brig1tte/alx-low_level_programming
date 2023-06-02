#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - a function to print all the elements of a list_t list
 * @h: a pointer to the list_t list to be printed
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d]%s\n", 0, "(nil)");
		else
			printf("[%d]%s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
