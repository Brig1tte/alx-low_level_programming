#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function to return the number of elements in a linked list_t list
 * @h: a pointer to linked list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nelems = 0;

	while (h)
	{
		nelems++;
		h = h->next;
	}
	return (nelems);
}
