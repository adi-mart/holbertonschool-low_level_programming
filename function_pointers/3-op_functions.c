#include "3-calc.h"
/**
 * op_add - Adds two numbers
 * @a: The first number
 * @b: The second number
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts two numbers
 * @a: The first number
 * @b: The second number
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two numbers
 * @a: The first number
 * @b: The second number
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two numbers
 * @a: The first number
 * @b: The second number
 * Return: The quotient of a and b, or 0 if b is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
/**
 * op_mod - Computes the modulus of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The remainder of a divided by b, or 0 if b is 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
