#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: (return new piinter string).
 */
char *str_concat(char *s1, char *s2)
{
char *ptr, *dup1, *dup2;
int size, x1 = 0, x2 = 0, i = 0;
if (s1 == NULL)
{
s1 = "";
dup1 = s1;
x1 = 0;
}
else
{
dup1 = s1;
for (; *s1; x1++, s1++)
;
}
if (s2 == NULL)
{
s2 = "";
dup2 = s2;
x2 = 0;
}
else
{
dup2 = s2;
for (; *s2; x2++, s2++)
;
}
size = x1 + x2;
ptr = (char *)malloc(size *sizeof(char) + 1);
if (ptr == NULL)
return (NULL);
for (; i <= x1; i++, dup1++)
ptr[i] = *dup1;
for (; x1 <= size; x1++, dup2++)
ptr[x1] = *dup2;
return (ptr);
}
