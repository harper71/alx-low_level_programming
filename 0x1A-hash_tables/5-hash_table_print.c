#include "hash_tables.h"
/**
 * hash_table_print - prints the key and element in table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	bool first_element;

	hash_node_t *prints;

	unsigned long int index;

	if (ht == NULL)
	{
		return;
	}

	first_element = true;

	index = 0;

	printf("{");
	while (index < ht->size)
	{
		prints = ht->array[index];

		index++;
		while (prints != NULL)
		{
			if (!first_element)
			{
				printf(", ");
			}
			printf("'%s': '%s'", prints->key, prints->value);

			prints = prints->next;

			first_element = false;
		}
	}
	printf("}");
	printf("\n");
}
