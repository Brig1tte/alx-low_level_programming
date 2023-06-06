#include "lists.h"

/**
 * listint_len - To return the number of elements in a linked listint_t list
 * @h: type of listint_t linked list to be traversed
 * Return: the number of elements(nodes)
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
