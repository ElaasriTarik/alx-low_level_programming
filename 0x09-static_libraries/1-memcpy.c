#include "main.h"

/**
 * _memcpy - copies from src to dest
 * @src: the values to copy
 * @dest: the destination
 * @n: the number of times to copy
 * Return: *dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;
while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
