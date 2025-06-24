#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Description: This function takes a pointer to a string and prints
 * it to the standard output, followed by a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
