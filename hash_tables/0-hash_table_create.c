#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the array to be created
 *
 * Return: pointer to the newly created hash table,
 * or NULL if it failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(size * sizeof(*new->array));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
