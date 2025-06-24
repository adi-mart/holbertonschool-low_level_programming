#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Description: This function takes two pointers to integers and swaps
 * the values they point to.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
