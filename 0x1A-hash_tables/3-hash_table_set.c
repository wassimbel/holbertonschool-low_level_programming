#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if succeeded, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *node, *new_node;
	unsigned long int index;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node || !node->key)
		return (0);
	while (node && node->key)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
