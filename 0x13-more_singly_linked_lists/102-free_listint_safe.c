#include "lists.h"

/**
 * free_listint_safe - function to free a listint_t list
 * @h: a pointer to the first node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int dfrnz;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dfrnz = *h - (*h)->next;
		if (dfrnz > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}

	*h = NULL;

	return (leng);
}
