#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees a dog_t struct
 * @d: pointer to the dog_t struct to free
 *
 * Description: This function frees the memory allocated for a dog_t struct,
 * including its name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
