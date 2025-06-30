#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}
