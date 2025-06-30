#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: the byte to fill the memory area with
 * @n: number of bytes to fill
 *
 * Description: This function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 *
 * Return: pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
