#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: This function multiplies all the arguments
 * passed to the program,
 * each followed by a new line.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;
	int num1;
	int num2;

	i = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[i]);
	num2 = atoi(argv[i + 1]);
	printf("%d\n", num1 * num2);

	return (0);
}
