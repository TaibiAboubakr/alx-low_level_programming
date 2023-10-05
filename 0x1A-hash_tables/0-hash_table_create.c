#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 * Return: a pointer to the newly created hash table, or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *h_table;
unsigned long int i;

h_table = (hash_table_t *) malloc(sizeof(hash_table_t));
if (!h_table)
	return (NULL);

h_table->array = malloc(sizeof(hash_node_t *) * size);
if (!h_table->array)
	{free(h_table);
	return (NULL); }
for (i = 0; i < size; i++)
	h_table->array[i] = NULL;
h_table->size = size;

return (h_table);
}
