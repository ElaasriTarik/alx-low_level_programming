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
return (res);
}
needle = ff;
res++;
haystack = res;
}
return (NULL);
}
