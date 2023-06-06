#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete the node at index, of a list
 * @index: the index of the node that should be deleted, starts at 0
 * @head: a pointer to the first node in the linked list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *recent = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (k < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}
	recent = temp->next;
	temp->next = recent->next;
	free(recent);

	return (1);
}
