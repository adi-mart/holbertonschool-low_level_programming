#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
