#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters.
 * @n: number of parameters.
 *
 * Return: the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum;

	i = 0;
	sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	while (i < n)
	{
		sum = sum + va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}
