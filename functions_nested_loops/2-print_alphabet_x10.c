#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * followed by a new line.
 */
int print_alphabet_x10(void)
{
	char  c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
return (0);
}
