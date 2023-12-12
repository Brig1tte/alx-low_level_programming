#include "search_algos.h"
#include <stdio.h>

/**
 * jump_list - to srch 4 values in sorted list of ints
 *			using the Jump search algorithm
 * @list: pointer to the head of the linked list to search
 * @size: number of nodes in the list
 * @value: value to search for
 * Return: If the value is not present or the head of the list is NULL, NULL
 *         Otherwise, a pointer to first node where the value is located
 *
 * Description: Prints a value every time it is compared in the list
 *              Uses the square root of the list size as the jump step
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t steps, step_size;
	listint_t *node, *jumps;

	if (list == NULL || size == 0)
		return (NULL);

	steps = 0;
	step_size = sqrt(size);
	for (node = jumps = list; jumps->idx + 1 < size && jumps->n < value;)
	{
		node = jumps;
		for (steps += step_size; jumps->idx < steps; jumps = jumps->next)
		{
			if (jumps->idx + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n",
				jumps->idx, jumps->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->idx, jumps->idx);

	for (; node->idx < jumps->idx && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n",
				node->idx, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->idx, node->n);

	return (node->n == value ? node : NULL);
}
