#ifndef HASH_TABLES_H1
#define HASH_TABLES_H1


#include "hash_tables.h"

/**
 * shash_table_delete -  function that deletes a sorted hash table.
 * @ht:  is the hash table you want to look into
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int idx = 0;
	shash_node_t *temp;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp)
		{
			free(temp->key);
			free(temp->value);
			ht->array[idx] = temp->next;
			free(temp);
			temp = ht->array[idx];
		}
	}
	free(ht->array);
	free(ht);
}
#endif /* HASH_TABLES_H */
