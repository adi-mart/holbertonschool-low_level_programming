#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
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

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		free(owner);
		free(ptr);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(name);
		free(ptr);
		return (NULL);
	}
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;

	return (ptr);
}
