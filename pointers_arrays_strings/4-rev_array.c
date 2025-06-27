#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array to reverse
 * @n: number of elements in the array
 *
 * Description: This function takes a pointer to an array of integers
 * and reverses the order of its elements in place.
 */
void reverse_array(int *a, int n)
{
	int i;
	int stock;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		stock = a[i];
		a[i] = a[n];
		a[n] = stock;
		i++;
		n--;
	}
}
