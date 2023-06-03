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
	list_t *new_node, list_t temp = *head;
	unsigned int leng = 0;

	while (str[leng])
		leng++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = leng;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
