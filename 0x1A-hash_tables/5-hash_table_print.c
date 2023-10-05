#include "hash_tables.h"
/**
 * hash_table_print -   function that prints a hash table.
 * @ht:  is the hash table you want to look into
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *temp;
	bool f_node = true;

	if (!ht)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp)
		{
			if (!f_node)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			f_node = false;
			temp = temp->next;
		}
	}
	printf("}\n");
}
