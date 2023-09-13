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
	unsigned long int index;
	hash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	/* Check if key already exists */
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	/* Create new node */
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new_->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
