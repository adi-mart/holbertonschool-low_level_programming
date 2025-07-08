#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Description: This function allocates memory for a 2D array of integers,
 * initializes all elements to 0, and returns a pointer to the array.
 *
 * Return: pointer to the allocated grid, or NULL if allocation fails
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **tab;

	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);

	tab = (malloc(sizeof(int *) * height));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab[i] = (malloc(sizeof(int) * width));
		if (tab[i] == NULL)
		{
			while (i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
