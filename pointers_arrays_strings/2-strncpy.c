#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies up to n characters from the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: number of characters to copy from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
