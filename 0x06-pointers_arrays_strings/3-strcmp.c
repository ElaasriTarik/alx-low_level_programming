#include "main.h"
#include <stdio.h>
/**
 * *_strcmp - compares two strings
 *@s1: the frist string
 *@s2: the second string
 * Return: Always Success.
*/
int _strcmp(char *s1, char *s2)
{
int res = 0;
int i = 0;
while (dest[i] != '\0' && src[i] != '\0')
{
if (dest[i] != src[i])
{
res = dest[i] - src[i];
break;
}  
i++;
}
return (res);
}
