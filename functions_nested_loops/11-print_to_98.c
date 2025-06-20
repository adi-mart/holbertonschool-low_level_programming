#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the starting number
 */
void print_to_98(int n)
{
	n = 0;

	while (n < 98)
	{
		write(1, &n, 1);
		write(1, ", ", 2);
		n++;
	}
	while (n > 98)
	{
		write(1, &n, 1);
		write(1, ", ", 2);
		n--;
	}
}
