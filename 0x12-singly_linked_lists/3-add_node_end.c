#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *add_node_end - function to add a new node at the end of a list_t list
 * @head: double pointer
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *recent_node;
	size_t s;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (s = 0; str[s]; s++)
		;

	new_node->len = leng;
	new_node->next = NULL;
	recent_node = *head

	if(recent_node == NULL)
	{
		*head = new_node;
	}
	else
		while(recent_node->next != NULL)
			recent_node = recent_node->next;

	recent_node->next = new_node;

	return (*head);
}
