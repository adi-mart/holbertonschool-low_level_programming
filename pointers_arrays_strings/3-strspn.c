#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 * Description: This function calculates the length of the initial segment
 * of the string s which consists entirely of characters
 * from the string accept.
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int n;

	i = 0;
	j = 0;
	n = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (n);
		i++;
	}
	return (n);
}
