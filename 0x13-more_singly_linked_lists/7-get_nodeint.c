#include "lists.h"

/**
 * *get_nodeint_at_index - function to return the nth node of a listint_t list
 * @head: the first node in the linked list
 * @index: the index of the node, starting at 0
 * Return: pointer to the node, or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}
	return (temp ? temp : NULL);
}
