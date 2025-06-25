#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array to print
 * @n: number of elements to print
 *
 * Description: This function takes a pointer to an array of integers
 * and prints the first n elements, followed by a new line.
 */
void print_array(int *a, int n)
{
	int	i = 0;

	while (i < n)
	{
	if (i != n - 1)
		printf("%d, ", a[i]);
	else
		printf("%d", a[i]);
	i++;
	}
	printf("\n");
}
