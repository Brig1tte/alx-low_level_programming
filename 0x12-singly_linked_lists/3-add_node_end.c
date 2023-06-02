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
	list_t *newNode, *recent_node;
	size_t s;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	for (s = 0; str[s]; s++)
		;
	newNode->len = s;
	newNode->next = NULL;
	recent_node = *head;

	if (recent_node == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (recent_node->next != NULL)
		       recent_node = recent_node->next;
		recent_node->next = recent_node;
	}
	return (*head);
}
