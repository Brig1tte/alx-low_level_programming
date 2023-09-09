#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: The size of the array
 * Return: If an error occurs - NULL, else, a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int k;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		ht->array[k] = NULL;

	return (ht);
}
