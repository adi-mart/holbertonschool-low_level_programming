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
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (len--; len >= 0; len--)
	{
		putchar(s[len]);
	}

	putchar('\n');
}
