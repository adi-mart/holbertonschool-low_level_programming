#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Description: This function allocates memory for a new string,
 * copies the content of the input string into it, and returns
 * a pointer to the new string.
 *
 * Return: pointer to the duplicated string, or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
	char *cpy;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	cpy[len] = '\0';
	return (cpy);
}
