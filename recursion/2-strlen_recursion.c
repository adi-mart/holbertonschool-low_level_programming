#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be measured
 *
 * Description: This function calculates the length of a string
 * using recursion. It counts each character until it reaches
 * the null terminator.
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		_strlen_recursion(s + 1);
	else
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
