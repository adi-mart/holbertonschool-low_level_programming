#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_char - prints a character
 * @args: va_list containing the character to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - prints an integer
 * @args: va_list containing the integer to print
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * print_float - prints a float
 * @args: va_list containing the float to print
 */
void print_float(va_list args)
{
	printf("%e", va_arg(args, double));
}
/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	const char *separator = "";
/**
 * struct print_t - structure for print functions
 * @c: the format specifier
 * @f: the function to call
 */
	struct print_t
	{
		char c;
		void (*f)(va_list);
	};
	struct print_t p[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (p[j].c)
		{
			if (format[i] == p[j].c)
			{
				printf("%s", separator);
				p[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
