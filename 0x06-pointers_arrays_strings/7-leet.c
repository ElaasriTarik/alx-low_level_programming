#include "main.h"
#include <stdio.h>
/**
 * leet - changes specific letters to numbers
 *@s: the string to be changed
 * Return: Success
*/
char *leet(char *s)
{
int i;
int x;
int f;
x = 0;
char c[] = "aAeEoOtTlL";
char l[] = "4433007711";
while (s[x] != '\0')
{
i = 0;
f = 0;
while (c[i] != '\0')
{
if (s[x] == c[i])
{
f = i;
s[x] = l[f];
}
i++;
}
x++;
}
return (s);
}
