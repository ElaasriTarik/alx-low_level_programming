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
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
