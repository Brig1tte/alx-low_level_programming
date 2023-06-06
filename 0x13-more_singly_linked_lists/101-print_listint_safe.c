#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - function to count number of unique codes
 * @head: pointer to the head of the linked list to be checked
 * Return: number of unique nodes, 0 if the list is not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *hare, *tortoise;
	size_t nelems = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				nelems++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nelems++;
				tortoise = tortoise->next;
			}
			return (nelems);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function to print a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nelems, idx = 0;

	nelems = looped_listint_len(head);

	if (nelems == 0)
	{
		for (; head != NULL; nelems++)
		{
			printf("[%p]%d\n",(void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < nelems; idx++)
		{
			printf("[%p]%d\n",(void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n",(void *)head, head->n);
	}
	return (nelems);
}
