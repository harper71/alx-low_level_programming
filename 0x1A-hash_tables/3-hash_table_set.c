#include "hash_tables.h"
/**
 * hash_table_set - adds elements to the hash table
 * @ht: hash_table to add elements to
 * @key: the key associated to an element
 * @value: element to be added
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_value;

	unsigned long int index;

	if (key == NULL || *key == '\0')
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new_value = malloc(sizeof(hash_node_t));

	new_value->key = malloc(strlen(key) + 1);
	if (new_value->key == NULL)
	{
		free(new_value);
		return (0);
	}

	strcpy(new_value->key, key);

	new_value->value = malloc(strlen(value) + 1);
	if (new_value->value == NULL)
	{
		free(new_value->key);
		free(new_value->value);
		return (0);
	}

	strcpy(new_value->value, value);

	new_value->next = ht->array[index];

	ht->array[index] = new_value;

	return (1);
}
