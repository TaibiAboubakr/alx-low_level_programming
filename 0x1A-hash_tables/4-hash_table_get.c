#include "hash_tables.h"
/**
 * hash_table_get -  function that retrieves a value associated with a key.
 * @ht:  is the hash table you want to look into
 * @key: is the key you are looking for
 *Return: the value associated with the element,NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	else if (ht->array[index])
		{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(key, temp->key) == 0)
				return (temp->value);
			temp = ht->array[index]->next;
		}
		return (NULL);
	}
return (NULL);
}
