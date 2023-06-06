#include "lists.h"

/**
 * free_listint2 - function to free a listint_t list
 * @head: a pointer to the listint_ list to free
 * Return: freed listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
