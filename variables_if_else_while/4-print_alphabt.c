#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints the lowercase alphabet except q and e.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'q')
			continue;
		putchar(l);
	}
	putchar('\n');
	return (0);
}
