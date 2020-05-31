#include "hash_tables.h"

/**
 * hash_table_get - retrieves an element to the hash table
 * @ht: the hash table
 * @key: the key
 * Return: the value of the key, or Null if key not found
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *new_node;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[index];
	if (!new_node)
	return (NULL);

	while (new_node)
	{
		if (strcmp(new_node->key, key) == 0)
		{
		return (new_node->value);
		new_node = new_node->next;
		}
	}
	return (NULL);
}

