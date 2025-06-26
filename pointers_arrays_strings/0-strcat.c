#include <stdio.h>
#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: pointer to the destination string
* @src: pointer to the source string
*
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
