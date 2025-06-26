#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	int signe;
	int resultat;

	i = 0;
	signe = 1;
	resultat = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			signe *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		resultat = resultat * 10 + (s[i] - '0');
		if (resultat > INT_MAX)
			return (INT_MAX);
		if (-resultat < INT_MIN)
			return (INT_MIN);
		i++;
	}
	return (signe * resultat);
}
