#include "hash_tables.h"

/**
 * hash_table_print(const hash_table *ht)
 * @ht: the hash table
 * Return: void
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i = 0;
	int j = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] && ht->array[i]->key)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			j = 1;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
