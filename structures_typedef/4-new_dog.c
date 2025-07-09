#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t struct, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *name_cpy;
	char *owner_cpy;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	name_cpy = strdup(name);
	if (name_cpy == NULL)
	{
		free(ptr);
		return (NULL);
	}
	owner_cpy = strdup(owner);
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(ptr);
		return (NULL);
	}
	ptr->name = name_cpy;
	ptr->owner = owner_cpy;
	ptr->age = age;

	return (ptr);
}
