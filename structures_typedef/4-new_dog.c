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
	char len_name;
	char len_owner;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		len_name = i;
	for (i = 0; owner[i] != '\0'; i++)
		len_owner = i;

	name = malloc(sizeof(char) * (len_name + 1));

	if (name == NULL)
	{
		free(owner);
		free(ptr);
		return (NULL);
	}
	owner = malloc(sizeof(char) * (len_owner + 1));
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
