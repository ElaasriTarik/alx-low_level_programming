#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates two strings
 *@dest: the frist string
 *@src: the second string
 *@n: number of chars fro src
 * Return: Always Success.
*/

char *_strncat(char *dest, char *src, int n)
{
int s, d = 0;
while (dest[d] != '\0')
{
d++;
}
s = 0;
while (src[s] != '\0' && n > 0)
{
dest[d] = src[s];
d++;
s++;
n--;
}
dest[d] = '\0';
return (dest);
}
