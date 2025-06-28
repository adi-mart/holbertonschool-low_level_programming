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

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			signe *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (signe == 1 && (resultat > (INT_MAX - (s[i] - '0')) / 10))
					return (INT_MAX);
				if (signe == -1 && (resultat > (-(INT_MIN + (s[i] - '0'))) / 10))
					return (INT_MIN);
				resultat = resultat * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}
	return (signe * resultat);
}