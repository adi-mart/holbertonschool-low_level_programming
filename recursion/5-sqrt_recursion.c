#include <stdio.h>
#include "main.h"
/**
 * _sqrt_helper - helper function to find the natural square root
 * @n: the number to find the square root of
 * @i: current guess (starts at 0 and increases)
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_helper(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return i;
    return _sqrt_helper(n, i + 1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: natural square root or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return _sqrt_helper(n, 0);
}
