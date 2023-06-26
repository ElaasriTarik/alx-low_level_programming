#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies src into dest
 * @src: the variable to be copied
 * @dest: the variable to copy into
 * Return: Success;
*/
void *_strcpy(char *dest, char *src)
{
int x = 0;
do
{
dest[x] = src[x];
printf("%c", dest[x]);
x++;
} while (src[x] != '\0');
dest[x] = '\0';
printf("\n");

}
