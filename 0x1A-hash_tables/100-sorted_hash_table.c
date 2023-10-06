#include "hash_tables.h"

/**
 * shash_table_create - function that creates a sorted hash table
 * @size: size of the sorted hash table
 * Return: a pointer to the newly created hash table, or NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{

shash_table_t *sh_table;
unsigned long int i;

sh_table = (shash_table_t *) malloc(sizeof(shash_table_t));
if (!sh_table)
	return (NULL);

sh_table->array = malloc(sizeof(shash_node_t *) * size);
if (!sh_table->array)
	{free(sh_table);
	return (NULL); }
for (i = 0; i < size; i++)
	sh_table->array[i] = NULL;
sh_table->shead = NULL;
sh_table->stail = NULL;
sh_table->size = size;

return (sh_table);
}



/**
 * shash_table_set -  function that adds an element to the sorted hash table.
 * @ht:  is the sorted hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		for (temp = ht->array[index]; temp; temp = temp->next)
			if (strcmp(ht->array[index]->key, key) == 0)
			{	free(temp->value);
				temp->value = strdup(value);
				if (temp->value == NULL)
					return (0);
				return (1);
			}
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->value = strdup(value);
	if (!new_node->value)
	{	free(new_node);
		return (0); }
	new_node->key = strdup(key);
	if (!new_node->key)
	{	free(new_node->value);
		free(new_node);
		return (0); }
	new_node->next = NULL;
	if (!ht->array[index])
	{	ht->array[index] = new_node;
		return (1);	}
	else if (ht->array[index])
	{	temp = ht->array[index];
		ht->array[index] = new_node;
		ht->array[index]->next = temp;
		return (1);	}
	return (0);
}


/**
 * shash_table_get -  function that retrieves a value associated with a key.
 * @ht:  is the hash table you want to look into
 * @key: is the key you are looking for
 *Return: the value associated with the element,NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

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

/**
 * shash_table_print -   function that prints a hash table.
 * @ht:  is the hash table you want to look into
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int idx;
	shash_node_t *temp;
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

/**
 * shash_table_print_rev -  print the hash tables key/value pairs in reverse
 * order using the sorted linked list
 * @ht:  is the hash table you want to look into
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int idx;
	shash_node_t *temp;
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
