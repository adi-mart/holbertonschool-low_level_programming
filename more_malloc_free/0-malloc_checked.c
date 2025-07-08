#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Description: This function allocates memory of size b using malloc.
 * If malloc fails, it exits with status 98.
 *
 * Return: pointer to the allocated memory, or exits with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
