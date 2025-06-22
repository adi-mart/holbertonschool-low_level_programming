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
	while (n != 98)
	{
		if (n < 0)
		{
			_putchar('-');
			if (-n >= 100)
				_putchar((-n / 100) + '0');
			if (-n >= 10)
				_putchar(((-n / 10) % 10) + '0');
			_putchar((-(n % 10)) + '0');
		}
		else
		{
			if (n >= 100)
				_putchar((n / 100) + '0');
			if (n >= 10)
				_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}
