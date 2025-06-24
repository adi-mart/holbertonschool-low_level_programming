#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 *
 * Description: This function takes a pointer to a string and prints
 * it in reverse order, followed by a new line.
 */
void print_rev(char *s)
{

	while (*s != '\0')
	{
		s++;
	}
	for (s--; *s >= 0; s--)
	{
		putchar(*s);
	}
	putchar('\n');
}
