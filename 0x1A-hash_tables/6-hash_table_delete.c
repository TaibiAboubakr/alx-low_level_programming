#include "hash_tables.h"
/**
 * hash_table_delete -  function that deletes a hash table.
 * @ht:  is the hash table you want to look into
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp;

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
