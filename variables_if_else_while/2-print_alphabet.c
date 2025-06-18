#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints the lowercase alphabet.
 * Return: Always 0 (Success)
 */

int main(void)

{
	char	l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
