#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 **/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = tmp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

