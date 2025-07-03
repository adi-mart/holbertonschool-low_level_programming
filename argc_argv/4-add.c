#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: This function adds all the arguments passed to the program,
 * each followed by a new line.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int somme;

	i = 1;
	j = 1;
	somme = 0;

	while (i < argc)
	{
		if (!(argv[i][0] >= '0' && argv[i][0] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		j = atoi(argv[i]);
		if (j == 0)
		{
			return (0);
		}
		somme = somme + j;
		i++;
	}
	printf("%d\n", somme);
	return (0);
}
