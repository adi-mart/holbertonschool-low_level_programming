#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings up to n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to concatenate from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i;
    int j;

    j = 0;
    i = 0;

    while (dest[i] != '\0')
        i++;
    while (j < n && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';

    return dest;
}
