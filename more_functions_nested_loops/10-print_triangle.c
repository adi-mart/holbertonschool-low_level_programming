#include <stdio.h>
#include "main.h"


void print_triangle(int size)
{
    int i;
    int j;

    if (size <= 0)
    {
        putchar('\n');
        return;
    }
    for (i = 0; i <= size; i++)
    {
        for (j = 0; j <= size; j++)
        {
            if (j < size - i + 1)
                putchar(' ');
            else
                putchar('#');
        }
        putchar('\n');
    }
}