#include "hash_tables.h"
/**
 * hash_table_create - creates an hashtable
 * @size: size of hashtable
 * Return: table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;

	table->array = malloc(size * sizeof(hash_node_t));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
