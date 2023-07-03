#include "main.h"
#include <stdio.h>
/**
 * _strstr - function locates the first osubstring needle
 * of any of the bytes in the string accept
 * @haystack: string
 * @needle: chars to find
 * Return: *s
*/

char *_strstr(char *haystack, char *needle)
{
int x;
char *res = haystack;
char *ff = needle; 
while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (result);
}
needle = ff;
needle++;
haystack = res;
}
return (NULL);
}
