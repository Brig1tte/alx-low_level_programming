#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - a function to add a new node at the beginning of a list_t list
 * @head: double pointer to structure
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNodes;
	unsigned int length = 0;

	while (str[length])
		length++;
	newNodes = malloc(sizeof(list_t));
	if (!newNodes)
	{
		return (NULL);
	}
	newNodes->str = strdup(str);
	newNodes->len = length;
	newNodes->next = (*head);
	(*head) = newNodes;
	return (*head);
}
