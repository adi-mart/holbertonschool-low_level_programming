#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int	i;
	int	signe;
	int	resultat;

	i = 0;
	signe = 1;
	resultat = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			signe = -signe;
		i++;
	}
	while (s[i] < '0' || s[i] > '9')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		resultat = resultat * 10 + (s[i] - '0');
			i++;
	}
	return (resultat * signe);
	return (0);
}
