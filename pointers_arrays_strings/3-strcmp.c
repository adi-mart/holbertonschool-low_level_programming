#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: This function compares two strings character by character.
 * It returns a negative value if s1 is less than s2, a positive value if
 * s1 is greater than s2, and 0 if they are equal.
 *
 * Return: an integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match, or be greater
 * than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
