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

	for (l = 'a'; l <= 'z'; l++,  i = 'A', i <= 'Z', i++)
	{
		putchar(l);
		putchar(i);
	}
	putchar('\n');
	return (0);
}
