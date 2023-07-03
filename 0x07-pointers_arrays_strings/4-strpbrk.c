#include "main.h"

/**
 * _strpbrk() - function locates the first occurrence in the string s 
 * of any of the bytes in the string accept
 * @s: pointer to char
 * @c: char to find
 * Return: *s
*/

char *_strpbrk(char *s, char *accept)
{
int x = 0;
while (*s)
{
while (accept[x])
{
if (*s == accept[x])
{
return (s);
}
x++;
}
s++;
}
return (NULL);
}
