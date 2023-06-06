#include "lists.h"

/**
 * *find_listint_loop - function to find the loop in a linked list
 * @head: the linked listint_t list to be checked
 * Return: address of the node where loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *high = head;

	if (!head)
		return (NULL);

	while (low && high && high->next)
	{
		high = high->next->next;
		low = low->next;
		if (high == low)
		{
			low = head;
			while (low != high)
			{
				low = low->next;
				high = high->next;
			}
			return (high);
		}
	}
	return (NULL);
}
