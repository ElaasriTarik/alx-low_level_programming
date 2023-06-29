#include "min.c"
#include <stdio.h>
/**
 * leet - changes specific letters to numbers
 *@s: the string to be changed
 * Return: Success
*/
char *leet(char *s)
{
int x, i, f;
x = 0;
char c[] = "aAeEoOtTlL";
char leet[] = "4433007711";
while (s[x] != '\0')
{
i = 0;
f = 0;
while (c[i] != '\0')
{
if (s[x] == c[i])
{
f = i;
s[x] = leet[f];
}
i++;
}
x++;
}
return (s);
}
