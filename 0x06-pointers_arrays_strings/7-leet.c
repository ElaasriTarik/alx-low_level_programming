#include "main.h"
/**
 * leet -  encodes a string into 1337 system.
 * @s: string to be encoded
 * Return: the full enconded string.
 */
char *leet(char *s)
{
int i, x, v;

char c[] = "aAeEoOtTlL";
char l[] = "4433007711";

i = 0;
while (s[i] != '\0')
{
x = 0;
v = 0;
while (c[x] != '\0')
{
if (s[i] == c[x])
{
v = x;
s[i] = l[v];
}
x++;
}
i++;
}
return (s);
}
