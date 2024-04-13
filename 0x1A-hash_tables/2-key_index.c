#include "hash_tables.h"
/**
 * key_index - creates the hashing keys
 * @size: size of the array
 * @key: to match to the data
 * Return: hash_key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	unsigned long int hash = 0;

	hash = hash_djb2(key);

	hash_key = hash % size;

	return (hash_key);

}
