#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
	{
		putchar(l);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
