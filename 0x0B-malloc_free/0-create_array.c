#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of given char
 * @size: size of array
 * @c: the character to add to array
 *
 * Return: (ar).
 */

char *create_array(unsigned int size, char c)
{
char *ar;
if (size == 0)
return (NULL);
ar = (char* )malloc(size * sizeof(char));
int x = 0;
while (x < size)
{
ar[x] = c;
x++;
}
return (ar);
}
