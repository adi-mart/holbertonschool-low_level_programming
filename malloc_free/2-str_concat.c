#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: This function allocates memory for a new string,
 * concatenates the two input strings,
 * and returns a pointer to the new string.
 *
 * Return: pointer to the concatenated string,
 * or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *str;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
