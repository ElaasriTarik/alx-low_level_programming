#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: a string to be duplicated
 *
 * Return: (return new piinter string).
 */

char *_strdup(char *str)
{
char *ptr;
int x = 0;
if (str == NULL)
return (NULL);
while (*str)
{
x++;
str++;
}
ptr = (char *)malloc(x * sizeof(char) + 1);
if (ptr == NULL)
return (NULL);
while (x >= 0)
{
ptr[x] = *str;
str--;
x--;
}
return (ptr);
}
