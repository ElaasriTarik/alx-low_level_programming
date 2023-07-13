#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _len - return number of chars in a string
 *@str: string to use
 * Return: (int)
*/

int _len(char *str)
{
int x = 0;
for (; str[x]; x++)
;
return (x);
}
/**
 * string_nconcat - function that concats two strings
 *@s1: string
 *@s2: string
 *@n: memory size
 * Return: (pointer)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0;
int ss = n;
char *p;
int b = 0;
int length;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if(ss < 0)
return (NULL);
if (ss >= _len(s2))
ss = _len(s2);
length = _len(s1) + ss + 1;
p = malloc(sizeof(char) * length);
if (p == NULL)
return (NULL);
while (*s1 != '\0')
{
p[i] = *s1;
i++;
*s1++;
}
while (b <= ss)
{
p[i] = *s2;
i++;
*s2++;
b++;
}
return (p);
}
