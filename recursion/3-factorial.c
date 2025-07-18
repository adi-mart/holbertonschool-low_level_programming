#include <stdio.h>
#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Description: This function calculates the factorial of a number n
 * using recursion. If n is less than 0, it returns -1 to indicate an error.
 *
 * Return: the factorial of n, or -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
