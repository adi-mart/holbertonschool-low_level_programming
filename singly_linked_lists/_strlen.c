#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @str: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	unsigned int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
