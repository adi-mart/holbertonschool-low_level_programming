#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints the lowercase alphabet in reverse order.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	char i;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
