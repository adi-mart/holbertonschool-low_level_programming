#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: pointer to the function to be executed
 *
 * Description: This function takes an array, its size,
 * and a function pointer, and applies the function
 * to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
}
