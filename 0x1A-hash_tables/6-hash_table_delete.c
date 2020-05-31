#include "hash_tables.h"

/**
 *
 *
 **/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	node = ht->array[i];
	while (i < ht->size)
	{
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

