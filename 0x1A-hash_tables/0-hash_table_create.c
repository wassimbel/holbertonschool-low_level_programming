#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	return (ht);
}
