#include "lists.h"

/**
 * print_dlistint - function to print all elements of a dlistint_t list
 * @h: A pointer to the head of doubly linked list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
