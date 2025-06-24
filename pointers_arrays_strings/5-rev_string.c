#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 *
 * Description: This function takes a pointer to a string and reverses
 * it in place, modifying the original string.
 */
void rev_string(char *s)
{
	int len = 0;
	int nel = 0;
	char stock;

	while (s[len] != '\0')
	{
		len++; /**pour trouver la longueur de la chaine*/
	}
	len = len - 1; /**pour ne pas prendre le \0*/
	while (nel < len)
	{
		stock = s[nel]; /**on stock le premier caractere*/
		s[nel] = s[len]; /**on remplace le premier caractere par le dernier*/
		s[len] = stock; /**on remplace le dernier caractere par le premier*/
		nel++; /**on avance dans la chaine qu'on écrit à l'envers*/
		len--; /**on recule dans la chaine qui est écrite à l'endroit*/
	}
}
