#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to be printed
 *
 * Description: This function prints a string using recursion.
 * It prints each character of the string until it reaches the null terminator.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
