#include "main.h"
#include <stdio.h>
/**
 * rot13 -  erotates a character by 13 spots
 * @s: string to be rotated
 * Return: the full rotated string.
 */
char *rot13(char *s);
{
int i = 0;
while (s[i] != '\0')
{
int x = 0;
while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
{
s[i] += 13;
}
else
{
s[i] -= 13;
}
i++;
}
i++;
}
return (s);
}
