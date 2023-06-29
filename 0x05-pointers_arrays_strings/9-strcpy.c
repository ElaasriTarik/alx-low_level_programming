#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies src into dest
 * @src: the variable to be copied
 * @dest: the variable to copy into
 * Return value: the pointer to dest
 * Return: dest (Success)
*/
char *_strcpy(char *dest, char *src)
{
int x = 0;
while (src[x] != '\0')
{
dest[x] = src[x];
x++;
}
dest[x] = '\0';

return (dest);
}
