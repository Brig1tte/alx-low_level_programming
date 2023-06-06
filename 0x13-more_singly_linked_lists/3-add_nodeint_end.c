#include "lists.h"

/**
 * *add_nodeint_end - function to add a new node at the end of a listint_t list
 * @head: a pointer to the first element
 * @n: integer to be inserted in the new element
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}
