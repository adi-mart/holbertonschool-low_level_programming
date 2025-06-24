#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle of size 'size'
 * @size: the size of the triangle
 *
 * Description: If 'size' is 0 or less, it prints a new line.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (j < size - i + 1)
				putchar(' ');
			else
				putchar('#');
		}
		putchar('\n');
	}
}
