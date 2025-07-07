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
	int i = 0;
	int j = 0;
	char *str;
	int len1;
	int len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
