#include <stdio.h>
#include "main.h"
/**
 * check_prime - helper function to check for prime recursively
 * @n: the number to check
 * @i: the current divisor being tested
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - checks if a number is a prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
