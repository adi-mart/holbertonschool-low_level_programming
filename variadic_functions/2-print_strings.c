#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a separator
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	i = 0;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
