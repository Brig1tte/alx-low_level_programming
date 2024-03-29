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
	unsigned long int i;
	hash_node_t *node;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			flag = 1;

			node = node->next;
		}
	}
	printf("}\n");
}
