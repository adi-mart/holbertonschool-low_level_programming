#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 *
 * Description: Prints the key/value pairs in the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;
	size_t count = 0;
	size_t total = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			total++;
		i++;
	}

	i = 0;

	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			count++;
			if (count < total - 1)
				printf(", ");
			current = current->next;
		}
		i++;
	}
	printf("}\n");
	}
