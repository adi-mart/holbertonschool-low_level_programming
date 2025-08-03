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

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			if (current != NULL)
				printf(", ");
		}
		i++;
	}
	printf("}\n");
}
