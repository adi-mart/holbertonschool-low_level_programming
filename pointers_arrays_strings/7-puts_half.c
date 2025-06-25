#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to print
 *
 * Description: This function takes a pointer to a string and prints
 * the second half of the string. If the length of the string is odd,
 * it prints the last (length - 1) / 2 characters.
 */
void puts_half(char *str)
{
	int n;
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
_putchar('\n');
}
