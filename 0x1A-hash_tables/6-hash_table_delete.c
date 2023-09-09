#include "hash_tables.h"

/**
 * hash_table_delete - Function to delete a hash table
 * @ht: pointer to a hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->head;
	while (node)
	{
		tmp = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
