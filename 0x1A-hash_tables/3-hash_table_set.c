#include "hash_tables.h"
/**
 * creates_node - creates a new node
 * @key: key of the data
 * @value: data to create
 * Return: new_node
*/
hash_node_t *creates_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;

	return (new_node);
}

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

	new_value = creates_node(key, value);

	new_value->next = ht->array[index];

	ht->array[index] = new_value;

	return (1);
}
