#include "hash_tables.h"
/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht:  is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		for (temp = ht->array[index]; temp; temp = temp->next)
			if (strcmp(ht->array[index]->key, key) == 0)
			{	free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
				return (1);
			}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->value = strdup(value);
	if (!new_node->value)
	{	free(new_node);
		return (0); }
	new_node->key = (char *) key;
	new_node->next = NULL;
	if (!ht->array[index])
	{
		ht->array[index] = new_node;
		return (1);
	}

	else if (ht->array[index])
	{
		temp = ht->array[index];
		ht->array[index] = new_node;
		ht->array[index]->next = temp;
		return (1);
	}
	return (0);
}
