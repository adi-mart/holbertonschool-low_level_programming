#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string into 1337 (leet) speak
 * @str: pointer to the string to encode
 *
 * Description: This function takes a pointer to a string and encodes
 * it into 1337 (leet) speak, modifying the original string.
 *
 * Return: pointer to the modified string
 */
char *leet(char *str)
{
	int i;
	int j;
	char *letter = "aeotlAEOTL";
	char *replace = "4307143071";

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (letter[j] != '\0')
		{
			if (str[i] == letter[j])
			{
				str[i] = replace[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
