#include "hash_tables.h"

/**
 * hash_table_set - function to add an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key to add, cannot be an empty string
 * @value: the value associated with key
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->head;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_copy);
		free(new);
		return (0);
	}

	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	if (ht->head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		ht->head = new;
		ht->tail = new;
	}
	else if (strcmp(ht->head->key, key) > 0)
	{
		new->prev = NULL;
		new->next = ht->head;
		ht->head->prev = new;
		ht->head = new;
	}
	else
	{
		tmp = ht->head;
		while (tmp->next != NULL && strcmp(tmp->next->key, key) < 0)
			tmp = tmp->next;
		new->prev = tmp;
		new->next = tmp->next;
		if (tmp->next == NULL)
			ht->tail = new;
		else
			tmp->next->prev = new;
		tmp->next = new;
	}

	return (1);
}
