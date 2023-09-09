#include "hash_tables.h"

/**
 * hash_table_print - Function to print a hash table
 * @ht: pointer to the hash table to print
 * Description: Key/value pairs are printed in the order that
 *	they appear in the array of the hash table
 * Return: Order - array/list, print nothing if ht is NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
