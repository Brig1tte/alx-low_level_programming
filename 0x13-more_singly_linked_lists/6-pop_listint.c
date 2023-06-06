#include "lists.h"

/**
 * pop_listint - function to delete the head node of a listint_t linked list
 * @head: a pointer to the fist element in the listint_t list
 * Return: the head node’s data (n), else 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (!head || !*head)
		return (0);

	d = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (d);
}
