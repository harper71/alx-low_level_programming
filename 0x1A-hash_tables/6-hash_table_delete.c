#include "hash_tables.h"
/**
 * hash_table_delete - frees all elements and keys
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *next;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	free(ht->array);
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			next = current->next;

			free(current->key);
			free(current->value);
			free(current);

			current = next;
		}
	}
	free(ht);
}
