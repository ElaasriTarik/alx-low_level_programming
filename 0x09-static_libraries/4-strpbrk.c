#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string
 * @accept: chars to find
 * Return: *s
*/

char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
x = 0;
for (; accept[x]; x++)
{
if (*s == accept[x])
{
return (s);
}
}
s++;
}
return (NULL);
}
