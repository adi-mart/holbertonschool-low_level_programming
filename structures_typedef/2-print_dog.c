#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <math.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL || d->owner == NULL || d->age == NAN)
		printf("(nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
