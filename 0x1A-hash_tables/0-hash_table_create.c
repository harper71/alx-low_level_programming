#include "hash_tables.h"
/**
 * hash_table_create - creates an hashtable
 * @size: size of hashtable
 * Return: table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->array = malloc(size * sizeof(hash_node_t));

	table->size = size;

	return (table);
}
