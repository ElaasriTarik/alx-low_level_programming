#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *@dest: the frist string
 *@src: the second string
 * Return: Always Success.
*/

char *_strcat(char *dest, char *src)
{
int s, d = 0;
while (dest[d] != '\0')
{
d++;
}
s = 0;
while (src[s] != '\0')
{
dest[d] = src[s];
d++;
s++;
}
dest[d] = '\0';
return (dest);
}
