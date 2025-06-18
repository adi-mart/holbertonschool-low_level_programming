#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints all single digit numbers
 * of base 10 starting from 0, without variable char
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
