#include "lists.h"

/**
 * get_dnodeint_at_index - Funct returns the nth node of dlistint_t linked list
 * @head: Pointer to the head of linked list
 * @index: Index of the node to retrieve (starting from 0)
 * Return: The nth node, or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}