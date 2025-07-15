#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Description: This function searches for an integer in an array
 * using a comparison function. It returns the index of the first
 * element that matches the comparison, or -1 if no match is found.
 *
 * Return: index of the first matching element, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (0);
}
