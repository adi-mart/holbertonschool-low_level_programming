#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square of size 'size'
 * @size: the size of the square
 *
 * Description: If size is 0 or less, only a new line is printed.
 */
void print_square(int size)
{

	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
