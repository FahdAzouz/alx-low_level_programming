#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
**/

void hash_table_delete(hash_table_t *ht)
{
	// Frees the table.

	for (int i = 0; i < ht->size; i++)
	{
		hash_node_t* item = hz->array[i];
		if (item != NULL)
		{
			free(item->key);
			free(item->value);
			free(item);
		}
	}

	free(ht->items);
	free(ht);
}
