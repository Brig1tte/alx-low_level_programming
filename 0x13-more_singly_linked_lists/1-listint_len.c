#include "lists.h"

/**
 * listint_len - To return the number of elements in a linked listint_t list
 * @h: type of listint_t linked list to be traversed
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nelems = 0;

	while (h)
	{
		nelems++;
		h = h->next;
	}
	return (nelems);
}
