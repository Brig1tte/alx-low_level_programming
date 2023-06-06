#include "lists.h"

/**
 * *add_nodeint - Function adds a new node at the beginning of a listint_t list
 * @head: a pointer to the first node in the listint_t list
 * @n: integer to insert in the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
