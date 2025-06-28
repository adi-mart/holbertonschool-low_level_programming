#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to modify
 *
 * Description: This function takes a pointer to a string and capitalizes
 * the first letter of each word, modifying the original string.
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
			else if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
			str[i - 1] == '\n' || str[i - 1] == ',' ||
			str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i -	1] == '(' ||
			str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}')
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				i++;
			}
		else
			i++;
	}
	return (str);
}
