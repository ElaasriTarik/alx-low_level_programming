#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings 
 *@dest: the frist string
 *src: the second string
 * Return: Always Success.
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
while (dest[i] != '\0')
{
putchar(dest[i]);
i++;
}
i = 0;
putchar(32);
while (src[i] != '\0')
{
putchar(src[i]);
i++;
}
putchar('\0');
}
