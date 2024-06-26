#include "hash_tables.h"
/**
 * hash_table_delete - frees all elements and keys
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			temp = current;

			current = current->next;

			free(temp->key);
			free(temp->value);
			free(temp);

		}
	}
	free(ht->array);
	free(ht);
}
