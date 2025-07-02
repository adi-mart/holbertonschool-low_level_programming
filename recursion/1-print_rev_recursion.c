#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed
 *
 * Description: This function prints a string in reverse using recursion.
 * It prints each character of the string
 * starting from the end until it reaches
 * the beginning.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
