#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve a value associated with a key
 * @ht: pointer to the hash table
 * @key: key to retrieve the value of
 * Return: value of the the element, or NULL if value not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	/* Traverse the linked list at the calculated index */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
