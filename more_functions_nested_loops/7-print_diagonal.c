#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character '\' should be printed
 *
 * Description: If n is 0 or less, only a new line is printed.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			{
			_putchar('\\');
			_putchar('\n');
			}
		}
	}
}
