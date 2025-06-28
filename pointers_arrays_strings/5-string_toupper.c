#include <stdio.h>
#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string to modify
 *
 * Description: This function takes a pointer to a string and converts
 * all lowercase letters to uppercase, modifying the original string.
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
