#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings up to n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Description: This function allocates memory for a new string,
 * concatenates the first string with the first n bytes of the second string,
 * and returns a pointer to the new string.
 *
 * Return: pointer to the concatenated string, or NULL if memory
 * allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *str;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + n + 1));
		len2 = n;
	}
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';
	return (str);
}
