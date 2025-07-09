#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
	{

		d->name = name;
		d->owner = owner;
		d->age = age;
	}
