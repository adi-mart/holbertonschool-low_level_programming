#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using a function pointer
 * @name: name of the person
 * @f: function pointer to the function that prints the name
 *
 * Description: This function takes a name and a function pointer,
 * and calls the function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
