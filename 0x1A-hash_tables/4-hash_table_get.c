#include "hash_tables.h"
/**
 * hash_table_get - gets the elments of a hash table
 * @key: key to an element
 * @ht: hash table
 * Return: element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (key == NULL || *key == '\0' || ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
