#include "lists.h"

/**
 * sum_listint - function to return the sum of all data(n) of a listint_t list
 * @head: the first node in the linked listint_t list
 * Return: the sum of all the data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s = s + temp->n;
		temp = temp->next;
	}
	return (s);
}
