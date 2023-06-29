#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - converts a string to uppercase
 * @s: the character to be uppercased.
 * Return: Success.
*/
char *string_toupper(char *s)
{
int x = 0;
while (s[x] != '\0')
{
if (s[x] >= 97 && s[x] <= 122)
{
s[x] = s[x] - 32;
}
else
{
s[x] = s[x];
}
x++;
}
return (s);
}
