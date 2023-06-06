#include "lists.h"

/**
 * *reverse_listint - function to reverse a listint_t linked list
 * @head: a pointer to the first node in the listint_t list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevs = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prevs;
		prevs = *head;
		*head = nxt;
	}
	*head = prevs;
	return (*head);
}
