#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to print
 *
 * Description: This function takes a pointer to a string and prints
 * every other character, starting with the first character.
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
