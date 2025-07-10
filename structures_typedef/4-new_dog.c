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
	int i;
	int len_name = 0;
	int len_owner = 0;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(len_name + 1);

	if (name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(len_owner + 1);

	if (owner == NULL)
	{
		free(name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		ptr->name[i] = name[i];
	for (i = 0; i < len_owner; i++)
		ptr->owner[i] = owner[i];
	ptr->age = age;
	return (ptr);
}
