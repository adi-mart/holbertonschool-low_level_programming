#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name using a function pointer
 * @name: name of the person
 * @f: function pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
