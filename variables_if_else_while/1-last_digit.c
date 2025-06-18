#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Entry point
 *  Description : This program assigns a random number
 *  to the variable n each time it is executed and checks
 *  the last digit of n.
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 0)
	{
		printf("and is greater than %d\n", last_digit);
	}
	else if (last_digit < 0)
	{
		printf("and is less than %d and not 0\n", last_digit);
	}
	else
	{
		printf("is %d and is 0\n", last_digit);
	}
	return (0);
}
