#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copies a string into another one
 *@dest: the frist string
 *@src: the second string
 *@n: number of chars to copy
 * Return: Always Success.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n)
{
if (src[i] == '\0')
break;
dest[i] = src[i];
i++;
}
return (dest);
}
