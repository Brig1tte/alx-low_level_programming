#include "lists.h"

/**
 * add_dnodeint_end - Function to add a new node at the end of dlistint_t list
 * @head: Pointer to a pointer to the head of the linked list
 * @n: Value to be stored in the new node
 * Return: Address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
	}

	return (new_node);
}
