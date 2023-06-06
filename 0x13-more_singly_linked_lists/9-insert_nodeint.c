#include "lists.h"

/**
 * *insert_nodeint_at_index - function to insert a new node at a given position
 * @head: a pointer to the first node int the linked list
 * @idx: INDEX of the list where the new node should be added, starts at 0
 * @n: integer data to insert into new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (k = 0; temp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
