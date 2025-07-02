#include <stdio.h>
/**
	* main - prints the name of the program
	* @argc: number of arguments
	* @argv: array of arguments
	* Description: This function prints the name of the program
	* followed by a new line.
	* Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
