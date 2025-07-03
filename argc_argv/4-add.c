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
	somme = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		somme = somme + atoi(argv[i]);
		i++;
	}
	printf("%d\n", somme);
	return (0);
}
