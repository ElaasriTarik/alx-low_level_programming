#include "main.h"

/**
 * rot13 - rotates a character by 13 spots
 * @s: string to be rotated
 * Return: the full rotated string.
*/
char *rot13(char *s)
{
int x, y;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (x = 0; *(s + x); x++)
{
for (y = 0; y < 52; y++)
{
if (a[y] == *(s + x))
{
*(s + x) = b[y];
break;
}
}
}
return (s);
}
